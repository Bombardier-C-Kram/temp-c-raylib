# Temp-c-raylib for Dyalog ⎕NA
Temp-c-raylib is for temporary raylib changes to be able to use ⎕NA with less issues in Dyalog APL. Currently only targets raylib 5.0, though with some modifications can target other versions.

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

## Convoluted building process right now
first go to `build/_deps/raylib-build/raylib/include/raylib.h` and add space after comma at ImageResizeNN.
Then run `src/convert.apls`.
then fix output by deleting the lines `rlEnableStatePointer` and `rlDisableStatePointer` in `src/temp-c-raylib.c`.
Then compile via `./compile.sh` and it should work.

Output is at `/home/brian/Persinal/Scripts/APL/temp-c-raylib/build/src`.

# Todo
## add struct-to-same-struct for each struct type:
It's used for getting a struct out of a pointer.
It would be a function that has one arg for return-value and one for pointer to a struct.
`void convert(struct t *a, struct t *b) {*a=*b}`


Return ReturnerFunc(Color);
void ReturnerFuncNew(NewReturn *ret, NewColor *color) {*ret=(NewReturn)ReturnerFunc((Color)*color);}


## Compile by linking raylib as static lib instead of recompiling
Link static lib in c code to avoid having to build raylib.

## Avoid structs padding via front-facing packed structs
```
struct __attribute__((packed)) NewColor {
    unsigned int r
    unsigned int g
    unsigned int b
    unsigned int a
}
```

`void ClearBackgroundNew(NewColor *color) {ClearBackground((Color)*color);}`
