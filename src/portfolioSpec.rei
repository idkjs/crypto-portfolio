type t = PortfolioSpec_t.config;

let default: t;

let print: t => unit;

/** IO/JSON exceptions ! */

let read: string => t;
let write: (string, t) => unit;
