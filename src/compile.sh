cd ..
zig cc -o libtemp-c-raylib.so --shared -I./raylib/lib -lraylib ./src/temp-c-raylib.c
cd src
