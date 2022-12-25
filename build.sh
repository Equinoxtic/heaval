#!/bin/sh

cmake -G "Visual Studio 17 2022" -A Win32 -S . -B build
cmake --build build --target heavalframework --config Release
./build/Release/heavalframework.exe