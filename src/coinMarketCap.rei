/* data from coinmarketcap api */
open Core;

type entry = CoinMarketCap_t.entry;

type t = String.Map.t(entry);

type quote_currency =
  | USD
  | EUR
  | BTC;

/* get data from api, quote defaults to usd */
let get: (~quote: quote_currency=?, unit) => t;
