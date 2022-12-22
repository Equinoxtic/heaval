# Building Heaval

To build, just run the following set of commands:

```shell
git clone https://github.com/Equinoxtic/heaval.git
cd heaval
cmake -G "Visual Studio 17 2022" -A Win32 -S. -Bbuild
cmake --build build --target heavalframework --config release
```

--------

And that's it! Now yo can just run ``./scripts/run.bat (WINDOWS) | ./scripts/run.sh (LINUX)``
