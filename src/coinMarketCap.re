open Core;

type entry = CoinMarketCap_t.entry;

type t = String.Map.t(entry);

type quote_currency =
  | USD
  | EUR
  | BTC;

let currency_str =
  fun
  | USD => "usd"
  | BTC => "btc"
  | EUR => "eur";

let api_url = q => {
  let str = currency_str(q);
  sprintf("https://api.coinmarketcap.com/v1/ticker/?limit=0&convert=%s", str);
};

let to_entry = (q, o) => o;

/* get data from api, quote defaults to usd */
/* val get: ?quote:quote_currency -> unit -> ticker */
let get = (~quote=USD, ()) => {
  let suffix = "_" ++ currency_str(quote);
  CoinMarketCap_t.(
    Shell.run_full("curl", [api_url(quote)])
    |> String.substr_replace_all(~pattern=suffix, ~with_="")
    |> String.substr_replace_all(~pattern="24h_volume", ~with_="volume_24h")
    |> CoinMarketCap_j.return_of_string
    |> List.map(~f=a => (a.id, a))
    |> String.Map.of_alist_exn
    |> Map.map(~f=to_entry(quote))
  );
};
