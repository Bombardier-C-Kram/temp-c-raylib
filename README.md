# Temp-c-raylib for Dyalog ⎕NA
Temp-c-raylib is for temporary raylib changes to be able to use ⎕NA with less issues in Dyalog APL. Currently only targets raylib 5.0, though with some modifications can target other versions.

# Compile
On Linux run `runNewMakeRaylib.bash`.

On Windows run `runNewMakeRaylib.ps1`. It assumes you're using `zig cc` as your compiler. If you want to use another one, look in the script and copy the args given to `zig cc` and give it to `Clang`, since `zig cc` is pretty much clang. I have no idea about gcc.
