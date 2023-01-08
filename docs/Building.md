# Building Heaval

## Requirements

* Git - [Download](https://git-scm.com/downloads)
* GCC compiler - [Download](https://gcc.gnu.org/install/binaries.html)
* CMake 3.2+ - [Download](https://cmake.org/download/)
* Visual Studio 2022 - [Download](https://visualstudio.microsoft.com/downloads/)
* Python (Optional) - [Download](https://www.python.org/downloads/)

---

First, you will need to clone the repository.

```shell
git clone https://github.com/Equinoxtic/heaval.git
cd heaval
```

If you have a GCC installed, you can now go ahead and proceed to compiling ``build.c``. (Which will be necessary for building the project) 

Run the following set of commands to build the project:

```shell
gcc -o build build.c buildutils.c
./build
```

---
And that's it! Note that running Heaval through this method will only give you a demo of what the framework can do. As stated in ``README.md``
