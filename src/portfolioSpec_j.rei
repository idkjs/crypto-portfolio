/* Auto-generated from "portfolioSpec.atd" */
[@ocaml.warning "-27-32-35-39"];

type asset =
  PortfolioSpec_t.asset = {
    id: string,
    amount: float,
  };

type config = PortfolioSpec_t.config = {assets: list(asset)};

/** Output a JSON value of type {!asset}. */

let write_asset: (Bi_outbuf.t, asset) => unit;

/** Serialize a value of type {!asset}
      into a JSON string.
      @param len specifies the initial length
                 of the buffer used internally.
                 Default: 1024. */

let string_of_asset: (~len: int=?, asset) => string;

/** Input JSON data of type {!asset}. */

let read_asset: (Yojson.Safe.lexer_state, Lexing.lexbuf) => asset;

/** Deserialize JSON data of type {!asset}. */

let asset_of_string: string => asset;

/** Output a JSON value of type {!config}. */

let write_config: (Bi_outbuf.t, config) => unit;

/** Serialize a value of type {!config}
      into a JSON string.
      @param len specifies the initial length
                 of the buffer used internally.
                 Default: 1024. */

let string_of_config: (~len: int=?, config) => string;

/** Input JSON data of type {!config}. */

let read_config: (Yojson.Safe.lexer_state, Lexing.lexbuf) => config;

/** Deserialize JSON data of type {!config}. */

let config_of_string: string => config;
