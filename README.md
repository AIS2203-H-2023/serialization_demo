# Serialization demo

Simple demo of serialization in C++ using:

* JSON
* Protobuf

### Building with vcpkg (using manifest mode)

Call CMake with
```
-DCMAKE_TOOLCHAIN_FILE=[path to vcpkg]/scripts/buildsystems/vcpkg.cmake
```

#### Building under MinGW

Under MinGW you'll need to specify the vcpkg triplet:
```
-DVCPKG_TARGET_TRIPLET=x64-mingw-[static|dynamic]   # choose either `static` or `dynamic`.
-DVCPKG_HOST_TRIPLET=x64-mingw-[static|dynamic]       # <-- needed only if MSVC cannot be found. 
