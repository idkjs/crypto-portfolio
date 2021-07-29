/* Auto-generated from "coinMarketCap.atd" */
[@ocaml.warning "-27-32-35-39"];

type entry = {
  id: string,
  name: string,
  symbol: string,
  rank: int,
  price: float,
  volume_24h: float,
  market_cap: float,
  available_supply: float,
  total_supply: float,
  percent_change_1h: float,
  percent_change_24h: float,
  percent_change_7d: float,
  last_updated: int,
};

type return = list(entry);
