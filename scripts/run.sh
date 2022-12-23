#!bin/sh

powershell -command cmake --build build --target heavalframework --config Release
./build/Release/heavalframework.exe