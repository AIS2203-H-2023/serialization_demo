# Serialization demo

Simple demo of serialization in C++ using:

* JSON
* Protobuf

### Building with vcpkg (using manifest mode)

Call CMake with
```
-DCMAKE_TOOLCHAIN_FILE=[path to vcpkg]/scripts/buildsystems/vcpkg.cmake
```

By default, only UDP, TCP/IP and WS demos are enabled (Boost dependency).
Add optional features by listing them with:
```
-DVCPKG_MANIFEST_FEATURES=feature1;feature2
```
See [vcpkg.json](vcpkg.json) for available features.