/* Auto-generated from "portfolioSpec.atd" */
[@ocaml.warning "-27-32-35-39"];

type asset =
  PortfolioSpec_t.asset = {
    id: string,
    amount: float,
  };

type config = PortfolioSpec_t.config = {assets: list(asset)};

let write_asset: (_, asset) => _ = (
  (ob, x: asset) => {
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
    Bi_outbuf.add_string(ob, "\"amount\":");
    Yojson.Safe.write_float(ob, x.amount);
    Bi_outbuf.add_char(ob, '}');
  }:
    (_, asset) => _
);
let string_of_asset = (~len=1024, x) => {
  let ob = Bi_outbuf.create(len);
  write_asset(ob, x);
  Bi_outbuf.contents(ob);
};
let read_asset = (p, lb) => {
  Yojson.Safe.read_space(p, lb);
  Yojson.Safe.read_lcurl(p, lb);
  let field_id = ref(None);
  let field_amount = ref(None);
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
        | 6 =>
          if (String.unsafe_get(s, pos) == 'a'
              && String.unsafe_get(s, pos + 1) == 'm'
              && String.unsafe_get(s, pos + 2) == 'o'
              && String.unsafe_get(s, pos + 3) == 'u'
              && String.unsafe_get(s, pos + 4) == 'n'
              && String.unsafe_get(s, pos + 5) == 't') {
            1;
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
      | 1 => field_amount := Some(Atdgen_runtime.Oj_run.read_number(p, lb))
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
          | 6 =>
            if (String.unsafe_get(s, pos) == 'a'
                && String.unsafe_get(s, pos + 1) == 'm'
                && String.unsafe_get(s, pos + 2) == 'o'
                && String.unsafe_get(s, pos + 3) == 'u'
                && String.unsafe_get(s, pos + 4) == 'n'
                && String.unsafe_get(s, pos + 5) == 't') {
              1;
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
        | 1 => field_amount := Some(Atdgen_runtime.Oj_run.read_number(p, lb))
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
        amount:
          switch (field_amount^) {
          | Some(x) => x
          | None => Atdgen_runtime.Oj_run.missing_field(p, "amount")
          },
      }: asset
    )
  };
};
let asset_of_string = s =>
  read_asset(Yojson.Safe.init_lexer(), Lexing.from_string(s));
let write__1 = Atdgen_runtime.Oj_run.write_list(write_asset);
let string_of__1 = (~len=1024, x) => {
  let ob = Bi_outbuf.create(len);
  write__1(ob, x);
  Bi_outbuf.contents(ob);
};
let read__1 = Atdgen_runtime.Oj_run.read_list(read_asset);
let _1_of_string = s =>
  read__1(Yojson.Safe.init_lexer(), Lexing.from_string(s));
let write_config: (_, config) => _ = (
  (ob, x: config) => {
    Bi_outbuf.add_char(ob, '{');
    let is_first = ref(true);
    if (is_first^) {
      is_first := false;
    } else {
      Bi_outbuf.add_char(ob, ',');
    };
    Bi_outbuf.add_string(ob, "\"assets\":");
    write__1(ob, x.assets);
    Bi_outbuf.add_char(ob, '}');
  }:
    (_, config) => _
);
let string_of_config = (~len=1024, x) => {
  let ob = Bi_outbuf.create(len);
  write_config(ob, x);
  Bi_outbuf.contents(ob);
};
let read_config = (p, lb) => {
  Yojson.Safe.read_space(p, lb);
  Yojson.Safe.read_lcurl(p, lb);
  let field_assets = ref(None);
  try(
    {
      Yojson.Safe.read_space(p, lb);
      Yojson.Safe.read_object_end(lb);
      Yojson.Safe.read_space(p, lb);
      let f = (s, pos, len) => {
        if (pos < 0 || len < 0 || pos + len > String.length(s)) {
          invalid_arg("out-of-bounds substring position or length");
        };
        if (len == 6
            && String.unsafe_get(s, pos) == 'a'
            && String.unsafe_get(s, pos + 1) == 's'
            && String.unsafe_get(s, pos + 2) == 's'
            && String.unsafe_get(s, pos + 3) == 'e'
            && String.unsafe_get(s, pos + 4) == 't'
            && String.unsafe_get(s, pos + 5) == 's') {
          0;
        } else {
          (-1);
        };
      };

      let i = Yojson.Safe.map_ident(p, f, lb);
      Atdgen_runtime.Oj_run.read_until_field_value(p, lb);
      switch (i) {
      | 0 => field_assets := Some(read__1(p, lb))
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
          if (len == 6
              && String.unsafe_get(s, pos) == 'a'
              && String.unsafe_get(s, pos + 1) == 's'
              && String.unsafe_get(s, pos + 2) == 's'
              && String.unsafe_get(s, pos + 3) == 'e'
              && String.unsafe_get(s, pos + 4) == 't'
              && String.unsafe_get(s, pos + 5) == 's') {
            0;
          } else {
            (-1);
          };
        };

        let i = Yojson.Safe.map_ident(p, f, lb);
        Atdgen_runtime.Oj_run.read_until_field_value(p, lb);
        switch (i) {
        | 0 => field_assets := Some(read__1(p, lb))
        | _ => Yojson.Safe.skip_json(p, lb)
        };
      };
      assert(false);
    }
  ) {
  | Yojson.End_of_object => (
      {
        assets:
          switch (field_assets^) {
          | Some(x) => x
          | None => Atdgen_runtime.Oj_run.missing_field(p, "assets")
          },
      }: config
    )
  };
};
let config_of_string = s =>
  read_config(Yojson.Safe.init_lexer(), Lexing.from_string(s));
