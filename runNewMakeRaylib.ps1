# Untested
#if ! ( [ -e "raylib-source.tar.gz" ] || [ -e "raylib-5.5" ] ); then
#  curl -L https://github.com/raysan5/raylib/archive/refs/tags/5.5.tar.gz --output raylib-source.tar.gz
#  tar -xzf raylib-source.tar.gz
#fi

# Optional step, re-runs the parser. Useful if you've modified the parser code.
# Replace this step with manually pasting the script at the bellow path into a dyalog session
# /usr/bin/dyalogscript "/home/brian/Persinal/Scripts/APL/temp-c-raylib/src/convert_pointerArgs.apls"

cd raylib-5.5/src
make clean
Add-Content -Path "rcore.c" -Value '#include "../../src/temp-c-raylib.c"'
make CC="zig cc -target x86_64-windows" RAYLIB_LIBTYPE=SHARED

# Sadly I am moving files manually, i don't understand why the linker wants .o files and make produces .obj
Move-Item -Path "rcore.obj" -Destination "rcore.o"
Move-Item -Path "rshapes.obj" -Destination "rshapes.o"
Move-Item -Path "rtextures.obj" -Destination "rtextures.o"
Move-Item -Path "rtext.obj" -Destination "rtext.o"
Move-Item -Path "utils.obj" -Destination "utils.o"
Move-Item -Path "rglfw.obj" -Destination "rglfw.o"
Move-Item -Path "rmodels.obj" -Destination "rmodels.o"
Move-Item -Path "raudio.obj" -Destination "raudio.o"

make CC="zig cc -target x86_64-windows" RAYLIB_LIBTYPE=SHARED
$content = Get-Content "rcore.c"
$content[0..($content.Length-2)] | Set-Content "rcore.c"
# Untested
#cp -f libraylib.so ../../libtemp-c-raylib.so
cd ../../
