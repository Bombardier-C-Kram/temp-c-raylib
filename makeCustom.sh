/usr/bin/dyalogscript "/home/brian/Persinal/Scripts/APL/temp-c-raylib/src/convert_pointerArgs.apls"
cd raylib-5.5/src
make clean
echo '#include "../../src/temp-c-raylib.c"' >> rcore.c
make RAYLIB_LIBTYPE=SHARED $@
sed -i '$ d' rcore.c
cd ../../
