/* Auto-generated from "coinMarketCap.atd" */
[@ocaml.warning "-27-32-35-39"];

type entry =
  CoinMarketCap_t.entry = {
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

type return = CoinMarketCap_t.return;

/** Output a JSON value of type {!entry}. */

let write_entry: (Bi_outbuf.t, entry) => unit;

/** Serialize a value of type {!entry}
      into a JSON string.
      @param len specifies the initial length
                 of the buffer used internally.
                 Default: 1024. */

let string_of_entry: (~len: int=?, entry) => string;

/** Input JSON data of type {!entry}. */

let read_entry: (Yojson.Safe.lexer_state, Lexing.lexbuf) => entry;

/** Deserialize JSON data of type {!entry}. */

let entry_of_string: string => entry;

/** Output a JSON value of type {!return}. */

let write_return: (Bi_outbuf.t, return) => unit;

/** Serialize a value of type {!return}
      into a JSON string.
      @param len specifies the initial length
                 of the buffer used internally.
                 Default: 1024. */

let string_of_return: (~len: int=?, return) => string;

/** Input JSON data of type {!return}. */

let read_return: (Yojson.Safe.lexer_state, Lexing.lexbuf) => return;

/** Deserialize JSON data of type {!return}. */

let return_of_string: string => return;
