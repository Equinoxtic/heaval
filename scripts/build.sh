#!/bin/sh

cmake -G "Visual Studio 17 2022" -A Win32 -S. -Bbuild
cmake --build build --target heavalframework --config release