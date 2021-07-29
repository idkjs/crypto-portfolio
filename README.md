# Crypto Portfolio

This command line tool consumes [coinmarketcap.com's API][cmc] and
produces small reports of your current holdings. The composition of your
portfolio has to be specified in a json file.

[cmc]:https://coinmarketcap.com/api/

```json
{
   "assets" : [
      {
         "amount" : 0.75,
         "id" : "bitcoin"
      },
      {
         "amount" : 3.6,
         "id" : "ethereum"
      },
      {
         "amount" : 42,
         "id" : "dogecoin"
      }
   ]
}
```

You can then generate a report.

```
#> ./crypto-portfolio portfolio.json
Assets:
        1h   24h     7d      rate    amount     value
BTC   +0.1  +0.1  +22.5  6.58e+03  7.50e-01  4.94e+03
ETH   +0.1  +1.6   +8.3  2.87e+02  3.60e+00  1.03e+03
DOGE  +1.2  +3.4  +13.6  1.14e-03  4.20e+01  4.80e-02

Combined:
        1h   24h     7d                         value
      +0.1  +0.3  +19.8                      5.97e+03
#>
```

All command line options can be accessed using the `-h` flag.

## Build

You need the ocaml toolchain and a few opam packages including core and
dune.

```
#> make
```

## Telegram Bot

The repository also contains a small telegram [bot](bot/bot.py) which is
written in python using the [python-telegram-bot package][pbot]. Follow
the telegram [documentation][tdoc] to create a new bot. The
[bot.py](bot/bot.py) program reads the api token from a `api.token` file
in the working directory. The bot only produces reports for users whose
portfolio specification is available in the working directory as
`<user_id>.json`.

[pbot]: https://python-telegram-bot.readthedocs.io/en/stable/
[tdoc]: https://core.telegram.org/bots

## Update Error

Getting this error when running:

```sh
❯ make test
dune build ./src/main.exe
rm -f crypto-portfolio
ln -s _build/default/src/main.exe crypto-portfolio
./crypto-portfolio
Uncaught exception:

  Yojson.Json_error("Line 1, bytes 0-33:\nExpected '[' but found '<!DOCTYPE HTML>\n<html lang=\"en-US'")

Raised at Yojson.json_error in file "common.ml", line 5, characters 19-39
Called from Yojson.Safe.read_list_rev in file "lib/read.ml" (inlined), line 2041, characters 3-55
Called from Yojson.Safe.read_list in file "lib/read.mll" (inlined), line 1071, characters 13-47
Called from Atdgen_runtime__Oj_run.read_list in file "atdgen-runtime/src/oj_run.ml", line 161, characters 2-38
Called from Dune__exe__CoinMarketCap.get in file "src/coinMarketCap.re", line 30, characters 4-222
Called from Dune__exe__Main.exec in file "src/main.re", line 155, characters 27-48
Called from Core_kernel__Command.For_unix.run.(fun) in file "src/command.ml", line 2453, characters 8-238
Called from Base__Exn.handle_uncaught_aux in file "src/exn.ml", line 111, characters 6-10
make: *** [test] Error 1
```

Probably need to set up something with https://coinmarketcap.com/api/
