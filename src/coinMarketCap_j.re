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

let write_entry: (_, entry) => _ = (
  (ob, x: entry) => {
    Bi_outbuf.add_char(ob, '{');
    let is_first = ref(true);
    if (is_first^) {
      is_first := false;
    } else {
      Bi_outbuf.add_char(ob, ',');
    };
    Bi_outbuf.add_string(ob, "\"id\":");
    Yojson.Safe.write_string(ob, x.id);
    if (is_first^) {
      is_first := false;
    } else {
      Bi_outbuf.add_char(ob, ',');
    };
    Bi_outbuf.add_string(ob, "\"name\":");
    Yojson.Safe.write_string(ob, x.name);
    if (is_first^) {
      is_first := false;
    } else {
      Bi_outbuf.add_char(ob, ',');
    };
    Bi_outbuf.add_string(ob, "\"symbol\":");
    Yojson.Safe.write_string(ob, x.symbol);
    if (is_first^) {
      is_first := false;
    } else {
      Bi_outbuf.add_char(ob, ',');
    };
    Bi_outbuf.add_string(ob, "\"rank\":");
    Yojson.Safe.write_int(ob, x.rank);
    if (x.price != 0.0) {
      if (is_first^) {
        is_first := false;
      } else {
        Bi_outbuf.add_char(ob, ',');
      };
      Bi_outbuf.add_string(ob, "\"price\":");
      Yojson.Safe.write_float(ob, x.price);
    };
    if (x.volume_24h != 0.0) {
      if (is_first^) {
        is_first := false;
      } else {
        Bi_outbuf.add_char(ob, ',');
      };
      Bi_outbuf.add_string(ob, "\"volume_24h\":");
      Yojson.Safe.write_float(ob, x.volume_24h);
    };
    if (x.market_cap != 0.0) {
      if (is_first^) {
        is_first := false;
      } else {
        Bi_outbuf.add_char(ob, ',');
      };
      Bi_outbuf.add_string(ob, "\"market_cap\":");
      Yojson.Safe.write_float(ob, x.market_cap);
    };
    if (x.available_supply != 0.0) {
      if (is_first^) {
        is_first := false;
      } else {
        Bi_outbuf.add_char(ob, ',');
      };
      Bi_outbuf.add_string(ob, "\"available_supply\":");
      Yojson.Safe.write_float(ob, x.available_supply);
    };
    if (x.total_supply != 0.0) {
      if (is_first^) {
        is_first := false;
      } else {
        Bi_outbuf.add_char(ob, ',');
      };
      Bi_outbuf.add_string(ob, "\"total_supply\":");
      Yojson.Safe.write_float(ob, x.total_supply);
    };
    if (x.percent_change_1h != 0.0) {
      if (is_first^) {
        is_first := false;
      } else {
        Bi_outbuf.add_char(ob, ',');
      };
      Bi_outbuf.add_string(ob, "\"percent_change_1h\":");
      Yojson.Safe.write_float(ob, x.percent_change_1h);
    };
    if (x.percent_change_24h != 0.0) {
      if (is_first^) {
        is_first := false;
      } else {
        Bi_outbuf.add_char(ob, ',');
      };
      Bi_outbuf.add_string(ob, "\"percent_change_24h\":");
      Yojson.Safe.write_float(ob, x.percent_change_24h);
    };
    if (x.percent_change_7d != 0.0) {
      if (is_first^) {
        is_first := false;
      } else {
        Bi_outbuf.add_char(ob, ',');
      };
      Bi_outbuf.add_string(ob, "\"percent_change_7d\":");
      Yojson.Safe.write_float(ob, x.percent_change_7d);
    };
    if (x.last_updated != 0) {
      if (is_first^) {
        is_first := false;
      } else {
        Bi_outbuf.add_char(ob, ',');
      };
      Bi_outbuf.add_string(ob, "\"last_updated\":");
      Yojson.Safe.write_int(ob, x.last_updated);
    };
    Bi_outbuf.add_char(ob, '}');
  }:
    (_, entry) => _
);
let string_of_entry = (~len=1024, x) => {
  let ob = Bi_outbuf.create(len);
  write_entry(ob, x);
  Bi_outbuf.contents(ob);
};
let read_entry = (p, lb) => {
  Yojson.Safe.read_space(p, lb);
  Yojson.Safe.read_lcurl(p, lb);
  let field_id = ref(None);
  let field_name = ref(None);
  let field_symbol = ref(None);
  let field_rank = ref(None);
  let field_price = ref(0.0);
  let field_volume_24h = ref(0.0);
  let field_market_cap = ref(0.0);
  let field_available_supply = ref(0.0);
  let field_total_supply = ref(0.0);
  let field_percent_change_1h = ref(0.0);
  let field_percent_change_24h = ref(0.0);
  let field_percent_change_7d = ref(0.0);
  let field_last_updated = ref(0);
  try(
    {
      Yojson.Safe.read_space(p, lb);
      Yojson.Safe.read_object_end(lb);
      Yojson.Safe.read_space(p, lb);
      let f = (s, pos, len) => {
        if (pos < 0 || len < 0 || pos + len > String.length(s)) {
          invalid_arg("out-of-bounds substring position or length");
        };
        switch (len) {
        | 2 =>
          if (String.unsafe_get(s, pos) == 'i'
              && String.unsafe_get(s, pos + 1) == 'd') {
            0;
          } else {
            (-1);
          }
        | 4 =>
          switch (String.unsafe_get(s, pos)) {
          | 'n' =>
            if (String.unsafe_get(s, pos + 1) == 'a'
                && String.unsafe_get(s, pos + 2) == 'm'
                && String.unsafe_get(s, pos + 3) == 'e') {
              1;
            } else {
              (-1);
            }
          | 'r' =>
            if (String.unsafe_get(s, pos + 1) == 'a'
                && String.unsafe_get(s, pos + 2) == 'n'
                && String.unsafe_get(s, pos + 3) == 'k') {
              3;
            } else {
              (-1);
            }
          | _ => (-1)
          }
        | 5 =>
          if (String.unsafe_get(s, pos) == 'p'
              && String.unsafe_get(s, pos + 1) == 'r'
              && String.unsafe_get(s, pos + 2) == 'i'
              && String.unsafe_get(s, pos + 3) == 'c'
              && String.unsafe_get(s, pos + 4) == 'e') {
            4;
          } else {
            (-1);
          }
        | 6 =>
          if (String.unsafe_get(s, pos) == 's'
              && String.unsafe_get(s, pos + 1) == 'y'
              && String.unsafe_get(s, pos + 2) == 'm'
              && String.unsafe_get(s, pos + 3) == 'b'
              && String.unsafe_get(s, pos + 4) == 'o'
              && String.unsafe_get(s, pos + 5) == 'l') {
            2;
          } else {
            (-1);
          }
        | 10 =>
          switch (String.unsafe_get(s, pos)) {
          | 'm' =>
            if (String.unsafe_get(s, pos + 1) == 'a'
                && String.unsafe_get(s, pos + 2) == 'r'
                && String.unsafe_get(s, pos + 3) == 'k'
                && String.unsafe_get(s, pos + 4) == 'e'
                && String.unsafe_get(s, pos + 5) == 't'
                && String.unsafe_get(s, pos + 6) == '_'
                && String.unsafe_get(s, pos + 7) == 'c'
                && String.unsafe_get(s, pos + 8) == 'a'
                && String.unsafe_get(s, pos + 9) == 'p') {
              6;
            } else {
              (-1);
            }
          | 'v' =>
            if (String.unsafe_get(s, pos + 1) == 'o'
                && String.unsafe_get(s, pos + 2) == 'l'
                && String.unsafe_get(s, pos + 3) == 'u'
                && String.unsafe_get(s, pos + 4) == 'm'
                && String.unsafe_get(s, pos + 5) == 'e'
                && String.unsafe_get(s, pos + 6) == '_'
                && String.unsafe_get(s, pos + 7) == '2'
                && String.unsafe_get(s, pos + 8) == '4'
                && String.unsafe_get(s, pos + 9) == 'h') {
              5;
            } else {
              (-1);
            }
          | _ => (-1)
          }
        | 12 =>
          switch (String.unsafe_get(s, pos)) {
          | 'l' =>
            if (String.unsafe_get(s, pos + 1) == 'a'
                && String.unsafe_get(s, pos + 2) == 's'
                && String.unsafe_get(s, pos + 3) == 't'
                && String.unsafe_get(s, pos + 4) == '_'
                && String.unsafe_get(s, pos + 5) == 'u'
                && String.unsafe_get(s, pos + 6) == 'p'
                && String.unsafe_get(s, pos + 7) == 'd'
                && String.unsafe_get(s, pos + 8) == 'a'
                && String.unsafe_get(s, pos + 9) == 't'
                && String.unsafe_get(s, pos + 10) == 'e'
                && String.unsafe_get(s, pos + 11) == 'd') {
              12;
            } else {
              (-1);
            }
          | 't' =>
            if (String.unsafe_get(s, pos + 1) == 'o'
                && String.unsafe_get(s, pos + 2) == 't'
                && String.unsafe_get(s, pos + 3) == 'a'
                && String.unsafe_get(s, pos + 4) == 'l'
                && String.unsafe_get(s, pos + 5) == '_'
                && String.unsafe_get(s, pos + 6) == 's'
                && String.unsafe_get(s, pos + 7) == 'u'
                && String.unsafe_get(s, pos + 8) == 'p'
                && String.unsafe_get(s, pos + 9) == 'p'
                && String.unsafe_get(s, pos + 10) == 'l'
                && String.unsafe_get(s, pos + 11) == 'y') {
              8;
            } else {
              (-1);
            }
          | _ => (-1)
          }
        | 16 =>
          if (String.unsafe_get(s, pos) == 'a'
              && String.unsafe_get(s, pos + 1) == 'v'
              && String.unsafe_get(s, pos + 2) == 'a'
              && String.unsafe_get(s, pos + 3) == 'i'
              && String.unsafe_get(s, pos + 4) == 'l'
              && String.unsafe_get(s, pos + 5) == 'a'
              && String.unsafe_get(s, pos + 6) == 'b'
              && String.unsafe_get(s, pos + 7) == 'l'
              && String.unsafe_get(s, pos + 8) == 'e'
              && String.unsafe_get(s, pos + 9) == '_'
              && String.unsafe_get(s, pos + 10) == 's'
              && String.unsafe_get(s, pos + 11) == 'u'
              && String.unsafe_get(s, pos + 12) == 'p'
              && String.unsafe_get(s, pos + 13) == 'p'
              && String.unsafe_get(s, pos + 14) == 'l'
              && String.unsafe_get(s, pos + 15) == 'y') {
            7;
          } else {
            (-1);
          }
        | 17 =>
          if (String.unsafe_get(s, pos) == 'p'
              && String.unsafe_get(s, pos + 1) == 'e'
              && String.unsafe_get(s, pos + 2) == 'r'
              && String.unsafe_get(s, pos + 3) == 'c'
              && String.unsafe_get(s, pos + 4) == 'e'
              && String.unsafe_get(s, pos + 5) == 'n'
              && String.unsafe_get(s, pos + 6) == 't'
              && String.unsafe_get(s, pos + 7) == '_'
              && String.unsafe_get(s, pos + 8) == 'c'
              && String.unsafe_get(s, pos + 9) == 'h'
              && String.unsafe_get(s, pos + 10) == 'a'
              && String.unsafe_get(s, pos + 11) == 'n'
              && String.unsafe_get(s, pos + 12) == 'g'
              && String.unsafe_get(s, pos + 13) == 'e'
              && String.unsafe_get(s, pos + 14) == '_') {
            switch (String.unsafe_get(s, pos + 15)) {
            | '1' =>
              if (String.unsafe_get(s, pos + 16) == 'h') {
                9;
              } else {
                (-1);
              }
            | '7' =>
              if (String.unsafe_get(s, pos + 16) == 'd') {
                11;
              } else {
                (-1);
              }
            | _ => (-1)
            };
          } else {
            (-1);
          }
        | 18 =>
          if (String.unsafe_get(s, pos) == 'p'
              && String.unsafe_get(s, pos + 1) == 'e'
              && String.unsafe_get(s, pos + 2) == 'r'
              && String.unsafe_get(s, pos + 3) == 'c'
              && String.unsafe_get(s, pos + 4) == 'e'
              && String.unsafe_get(s, pos + 5) == 'n'
              && String.unsafe_get(s, pos + 6) == 't'
              && String.unsafe_get(s, pos + 7) == '_'
              && String.unsafe_get(s, pos + 8) == 'c'
              && String.unsafe_get(s, pos + 9) == 'h'
              && String.unsafe_get(s, pos + 10) == 'a'
              && String.unsafe_get(s, pos + 11) == 'n'
              && String.unsafe_get(s, pos + 12) == 'g'
              && String.unsafe_get(s, pos + 13) == 'e'
              && String.unsafe_get(s, pos + 14) == '_'
              && String.unsafe_get(s, pos + 15) == '2'
              && String.unsafe_get(s, pos + 16) == '4'
              && String.unsafe_get(s, pos + 17) == 'h') {
            10;
          } else {
            (-1);
          }
        | _ => (-1)
        };
      };

      let i = Yojson.Safe.map_ident(p, f, lb);
      Atdgen_runtime.Oj_run.read_until_field_value(p, lb);
      switch (i) {
      | 0 => field_id := Some(Atdgen_runtime.Oj_run.read_string(p, lb))
      | 1 => field_name := Some(Atdgen_runtime.Oj_run.read_string(p, lb))
      | 2 => field_symbol := Some(Atdgen_runtime.Oj_run.read_string(p, lb))
      | 3 => field_rank := Some(Atdgen_runtime.Oj_run.read_int(p, lb))
      | 4 =>
        if (!Yojson.Safe.read_null_if_possible(p, lb)) {
          field_price := Atdgen_runtime.Oj_run.read_number(p, lb);
        }
      | 5 =>
        if (!Yojson.Safe.read_null_if_possible(p, lb)) {
          field_volume_24h := Atdgen_runtime.Oj_run.read_number(p, lb);
        }
      | 6 =>
        if (!Yojson.Safe.read_null_if_possible(p, lb)) {
          field_market_cap := Atdgen_runtime.Oj_run.read_number(p, lb);
        }
      | 7 =>
        if (!Yojson.Safe.read_null_if_possible(p, lb)) {
          field_available_supply := Atdgen_runtime.Oj_run.read_number(p, lb);
        }
      | 8 =>
        if (!Yojson.Safe.read_null_if_possible(p, lb)) {
          field_total_supply := Atdgen_runtime.Oj_run.read_number(p, lb);
        }
      | 9 =>
        if (!Yojson.Safe.read_null_if_possible(p, lb)) {
          field_percent_change_1h := Atdgen_runtime.Oj_run.read_number(p, lb);
        }
      | 10 =>
        if (!Yojson.Safe.read_null_if_possible(p, lb)) {
          field_percent_change_24h := Atdgen_runtime.Oj_run.read_number(p, lb);
        }
      | 11 =>
        if (!Yojson.Safe.read_null_if_possible(p, lb)) {
          field_percent_change_7d := Atdgen_runtime.Oj_run.read_number(p, lb);
        }
      | 12 =>
        if (!Yojson.Safe.read_null_if_possible(p, lb)) {
          field_last_updated := Atdgen_runtime.Oj_run.read_int(p, lb);
        }
      | _ => Yojson.Safe.skip_json(p, lb)
      };
      while (true) {
        Yojson.Safe.read_space(p, lb);
        Yojson.Safe.read_object_sep(p, lb);
        Yojson.Safe.read_space(p, lb);
        let f = (s, pos, len) => {
          if (pos < 0 || len < 0 || pos + len > String.length(s)) {
            invalid_arg("out-of-bounds substring position or length");
          };
          switch (len) {
          | 2 =>
            if (String.unsafe_get(s, pos) == 'i'
                && String.unsafe_get(s, pos + 1) == 'd') {
              0;
            } else {
              (-1);
            }
          | 4 =>
            switch (String.unsafe_get(s, pos)) {
            | 'n' =>
              if (String.unsafe_get(s, pos + 1) == 'a'
                  && String.unsafe_get(s, pos + 2) == 'm'
                  && String.unsafe_get(s, pos + 3) == 'e') {
                1;
              } else {
                (-1);
              }
            | 'r' =>
              if (String.unsafe_get(s, pos + 1) == 'a'
                  && String.unsafe_get(s, pos + 2) == 'n'
                  && String.unsafe_get(s, pos + 3) == 'k') {
                3;
              } else {
                (-1);
              }
            | _ => (-1)
            }
          | 5 =>
            if (String.unsafe_get(s, pos) == 'p'
                && String.unsafe_get(s, pos + 1) == 'r'
                && String.unsafe_get(s, pos + 2) == 'i'
                && String.unsafe_get(s, pos + 3) == 'c'
                && String.unsafe_get(s, pos + 4) == 'e') {
              4;
            } else {
              (-1);
            }
          | 6 =>
            if (String.unsafe_get(s, pos) == 's'
                && String.unsafe_get(s, pos + 1) == 'y'
                && String.unsafe_get(s, pos + 2) == 'm'
                && String.unsafe_get(s, pos + 3) == 'b'
                && String.unsafe_get(s, pos + 4) == 'o'
                && String.unsafe_get(s, pos + 5) == 'l') {
              2;
            } else {
              (-1);
            }
          | 10 =>
            switch (String.unsafe_get(s, pos)) {
            | 'm' =>
              if (String.unsafe_get(s, pos + 1) == 'a'
                  && String.unsafe_get(s, pos + 2) == 'r'
                  && String.unsafe_get(s, pos + 3) == 'k'
                  && String.unsafe_get(s, pos + 4) == 'e'
                  && String.unsafe_get(s, pos + 5) == 't'
                  && String.unsafe_get(s, pos + 6) == '_'
                  && String.unsafe_get(s, pos + 7) == 'c'
                  && String.unsafe_get(s, pos + 8) == 'a'
                  && String.unsafe_get(s, pos + 9) == 'p') {
                6;
              } else {
                (-1);
              }
            | 'v' =>
              if (String.unsafe_get(s, pos + 1) == 'o'
                  && String.unsafe_get(s, pos + 2) == 'l'
                  && String.unsafe_get(s, pos + 3) == 'u'
                  && String.unsafe_get(s, pos + 4) == 'm'
                  && String.unsafe_get(s, pos + 5) == 'e'
                  && String.unsafe_get(s, pos + 6) == '_'
                  && String.unsafe_get(s, pos + 7) == '2'
                  && String.unsafe_get(s, pos + 8) == '4'
                  && String.unsafe_get(s, pos + 9) == 'h') {
                5;
              } else {
                (-1);
              }
            | _ => (-1)
            }
          | 12 =>
            switch (String.unsafe_get(s, pos)) {
            | 'l' =>
              if (String.unsafe_get(s, pos + 1) == 'a'
                  && String.unsafe_get(s, pos + 2) == 's'
                  && String.unsafe_get(s, pos + 3) == 't'
                  && String.unsafe_get(s, pos + 4) == '_'
                  && String.unsafe_get(s, pos + 5) == 'u'
                  && String.unsafe_get(s, pos + 6) == 'p'
                  && String.unsafe_get(s, pos + 7) == 'd'
                  && String.unsafe_get(s, pos + 8) == 'a'
                  && String.unsafe_get(s, pos + 9) == 't'
                  && String.unsafe_get(s, pos + 10) == 'e'
                  && String.unsafe_get(s, pos + 11) == 'd') {
                12;
              } else {
                (-1);
              }
            | 't' =>
              if (String.unsafe_get(s, pos + 1) == 'o'
                  && String.unsafe_get(s, pos + 2) == 't'
                  && String.unsafe_get(s, pos + 3) == 'a'
                  && String.unsafe_get(s, pos + 4) == 'l'
                  && String.unsafe_get(s, pos + 5) == '_'
                  && String.unsafe_get(s, pos + 6) == 's'
                  && String.unsafe_get(s, pos + 7) == 'u'
                  && String.unsafe_get(s, pos + 8) == 'p'
                  && String.unsafe_get(s, pos + 9) == 'p'
                  && String.unsafe_get(s, pos + 10) == 'l'
                  && String.unsafe_get(s, pos + 11) == 'y') {
                8;
              } else {
                (-1);
              }
            | _ => (-1)
            }
          | 16 =>
            if (String.unsafe_get(s, pos) == 'a'
                && String.unsafe_get(s, pos + 1) == 'v'
                && String.unsafe_get(s, pos + 2) == 'a'
                && String.unsafe_get(s, pos + 3) == 'i'
                && String.unsafe_get(s, pos + 4) == 'l'
                && String.unsafe_get(s, pos + 5) == 'a'
                && String.unsafe_get(s, pos + 6) == 'b'
                && String.unsafe_get(s, pos + 7) == 'l'
                && String.unsafe_get(s, pos + 8) == 'e'
                && String.unsafe_get(s, pos + 9) == '_'
                && String.unsafe_get(s, pos + 10) == 's'
                && String.unsafe_get(s, pos + 11) == 'u'
                && String.unsafe_get(s, pos + 12) == 'p'
                && String.unsafe_get(s, pos + 13) == 'p'
                && String.unsafe_get(s, pos + 14) == 'l'
                && String.unsafe_get(s, pos + 15) == 'y') {
              7;
            } else {
              (-1);
            }
          | 17 =>
            if (String.unsafe_get(s, pos) == 'p'
                && String.unsafe_get(s, pos + 1) == 'e'
                && String.unsafe_get(s, pos + 2) == 'r'
                && String.unsafe_get(s, pos + 3) == 'c'
                && String.unsafe_get(s, pos + 4) == 'e'
                && String.unsafe_get(s, pos + 5) == 'n'
                && String.unsafe_get(s, pos + 6) == 't'
                && String.unsafe_get(s, pos + 7) == '_'
                && String.unsafe_get(s, pos + 8) == 'c'
                && String.unsafe_get(s, pos + 9) == 'h'
                && String.unsafe_get(s, pos + 10) == 'a'
                && String.unsafe_get(s, pos + 11) == 'n'
                && String.unsafe_get(s, pos + 12) == 'g'
                && String.unsafe_get(s, pos + 13) == 'e'
                && String.unsafe_get(s, pos + 14) == '_') {
              switch (String.unsafe_get(s, pos + 15)) {
              | '1' =>
                if (String.unsafe_get(s, pos + 16) == 'h') {
                  9;
                } else {
                  (-1);
                }
              | '7' =>
                if (String.unsafe_get(s, pos + 16) == 'd') {
                  11;
                } else {
                  (-1);
                }
              | _ => (-1)
              };
            } else {
              (-1);
            }
          | 18 =>
            if (String.unsafe_get(s, pos) == 'p'
                && String.unsafe_get(s, pos + 1) == 'e'
                && String.unsafe_get(s, pos + 2) == 'r'
                && String.unsafe_get(s, pos + 3) == 'c'
                && String.unsafe_get(s, pos + 4) == 'e'
                && String.unsafe_get(s, pos + 5) == 'n'
                && String.unsafe_get(s, pos + 6) == 't'
                && String.unsafe_get(s, pos + 7) == '_'
                && String.unsafe_get(s, pos + 8) == 'c'
                && String.unsafe_get(s, pos + 9) == 'h'
                && String.unsafe_get(s, pos + 10) == 'a'
                && String.unsafe_get(s, pos + 11) == 'n'
                && String.unsafe_get(s, pos + 12) == 'g'
                && String.unsafe_get(s, pos + 13) == 'e'
                && String.unsafe_get(s, pos + 14) == '_'
                && String.unsafe_get(s, pos + 15) == '2'
                && String.unsafe_get(s, pos + 16) == '4'
                && String.unsafe_get(s, pos + 17) == 'h') {
              10;
            } else {
              (-1);
            }
          | _ => (-1)
          };
        };

        let i = Yojson.Safe.map_ident(p, f, lb);
        Atdgen_runtime.Oj_run.read_until_field_value(p, lb);
        switch (i) {
        | 0 => field_id := Some(Atdgen_runtime.Oj_run.read_string(p, lb))
        | 1 => field_name := Some(Atdgen_runtime.Oj_run.read_string(p, lb))
        | 2 => field_symbol := Some(Atdgen_runtime.Oj_run.read_string(p, lb))
        | 3 => field_rank := Some(Atdgen_runtime.Oj_run.read_int(p, lb))
        | 4 =>
          if (!Yojson.Safe.read_null_if_possible(p, lb)) {
            field_price := Atdgen_runtime.Oj_run.read_number(p, lb);
          }
        | 5 =>
          if (!Yojson.Safe.read_null_if_possible(p, lb)) {
            field_volume_24h := Atdgen_runtime.Oj_run.read_number(p, lb);
          }
        | 6 =>
          if (!Yojson.Safe.read_null_if_possible(p, lb)) {
            field_market_cap := Atdgen_runtime.Oj_run.read_number(p, lb);
          }
        | 7 =>
          if (!Yojson.Safe.read_null_if_possible(p, lb)) {
            field_available_supply := Atdgen_runtime.Oj_run.read_number(p, lb);
          }
        | 8 =>
          if (!Yojson.Safe.read_null_if_possible(p, lb)) {
            field_total_supply := Atdgen_runtime.Oj_run.read_number(p, lb);
          }
        | 9 =>
          if (!Yojson.Safe.read_null_if_possible(p, lb)) {
            field_percent_change_1h :=
              Atdgen_runtime.Oj_run.read_number(p, lb);
          }
        | 10 =>
          if (!Yojson.Safe.read_null_if_possible(p, lb)) {
            field_percent_change_24h :=
              Atdgen_runtime.Oj_run.read_number(p, lb);
          }
        | 11 =>
          if (!Yojson.Safe.read_null_if_possible(p, lb)) {
            field_percent_change_7d :=
              Atdgen_runtime.Oj_run.read_number(p, lb);
          }
        | 12 =>
          if (!Yojson.Safe.read_null_if_possible(p, lb)) {
            field_last_updated := Atdgen_runtime.Oj_run.read_int(p, lb);
          }
        | _ => Yojson.Safe.skip_json(p, lb)
        };
      };
      assert(false);
    }
  ) {
  | Yojson.End_of_object => (
      {
        id:
          switch (field_id^) {
          | Some(x) => x
          | None => Atdgen_runtime.Oj_run.missing_field(p, "id")
          },
        name:
          switch (field_name^) {
          | Some(x) => x
          | None => Atdgen_runtime.Oj_run.missing_field(p, "name")
          },
        symbol:
          switch (field_symbol^) {
          | Some(x) => x
          | None => Atdgen_runtime.Oj_run.missing_field(p, "symbol")
          },
        rank:
          switch (field_rank^) {
          | Some(x) => x
          | None => Atdgen_runtime.Oj_run.missing_field(p, "rank")
          },
        price: field_price^,
        volume_24h: field_volume_24h^,
        market_cap: field_market_cap^,
        available_supply: field_available_supply^,
        total_supply: field_total_supply^,
        percent_change_1h: field_percent_change_1h^,
        percent_change_24h: field_percent_change_24h^,
        percent_change_7d: field_percent_change_7d^,
        last_updated: field_last_updated^,
      }: entry
    )
  };
};
let entry_of_string = s =>
  read_entry(Yojson.Safe.init_lexer(), Lexing.from_string(s));
let write__1 = Atdgen_runtime.Oj_run.write_list(write_entry);
let string_of__1 = (~len=1024, x) => {
  let ob = Bi_outbuf.create(len);
  write__1(ob, x);
  Bi_outbuf.contents(ob);
};
let read__1 = Atdgen_runtime.Oj_run.read_list(read_entry);
let _1_of_string = s =>
  read__1(Yojson.Safe.init_lexer(), Lexing.from_string(s));
let write_return = write__1;
let string_of_return = (~len=1024, x) => {
  let ob = Bi_outbuf.create(len);
  write_return(ob, x);
  Bi_outbuf.contents(ob);
};
let read_return = read__1;
let return_of_string = s =>
  read_return(Yojson.Safe.init_lexer(), Lexing.from_string(s));
