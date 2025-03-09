zig cc -shared \
  -I./raylib/include/ \
  -I./raylib/lib \
  -lraylib \
  -L./raylib/lib \
  src/temp-c-raylib.c \
  -o temp-c-raylib.dll \
  -target x86_64-windows \
