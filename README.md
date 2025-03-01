# Temp-c-raylib for Dyalog ⎕NA
Temp-c-raylib is for temporary raylib changes to be able to use ⎕NA with less issues in Dyalog APL. Currently only targets raylib 5.0, though with some modifications can target other versions.

# Compile
Run `./compile.sh`. It assumes you're using `zig cc` as your compiler. If you want to use another one, look in the script and copy the args given to `zig cc` and give it to `Clang`, since `zig cc` is pretty much clang. I have no idea about gcc.

## Convoluted building process right now

First go to [raylib 5.5 release](https://github.com/raysan5/raylib/releases/tag/5.5), download your version, add it to this repo. Rename the extracted folder to `raylib`. Inside `raylib/include/raylib.h`, add space after comma at one of the arguments of the function `ImageResizeNN`.
Then run `cd src && dyalogscript convert_pointerArgs.dyalog`.
Then compile (See the `Compile` section above) and it should work.

# Todo
## add struct-to-same-struct for each struct type:
It's used for getting a struct out of a pointer.
It would be a function that has one arg for return-value and one for pointer to a struct.
`void convert(struct t *a, struct t *b) {*a=*b}`


Return ReturnerFunc(Color);
void ReturnerFuncNew(NewReturn *ret, NewColor *color) {*ret=(NewReturn)ReturnerFunc((Color)*color);}

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
