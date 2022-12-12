:: Run script.

:: Build just incase.
powershell -command cmake --build build --target heavalframework --config release
powershell -command ./build/release/heavalframework.exe