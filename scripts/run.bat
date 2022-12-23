:: Run script.

:: Build just incase.
powershell -command cmake --build build --target heavalframework --config Release
powershell -command ./build/Release/heavalframework.exe