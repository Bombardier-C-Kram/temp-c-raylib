# Temp-c-raylib for Dyalog ⎕NA
Temp-c-raylib is for temporary raylib changes to be able to use ⎕NA with less issues in Dyalog APL.

# Compile
First time you want to compile you need run `./init.sh` to set cmake up.
Then every time you compile after that, you just run `./compile.sh`.

## To fix ninja not found error
```
cd build
rm -rf .cache
cmake -DCMAKE_C_COMPILER=clang ..
cd ../build
```
