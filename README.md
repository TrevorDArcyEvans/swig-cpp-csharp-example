# SWIG wrapper for a C++ library to be used in C# .Net

Making C++ play nicely with C#

# Pre-requisites

## Required

* git
* .NET 10 or higher
* cmake 3.16 or higher
* gcc 9.3 or higher
* swig 4.0.0 or higher

# Getting started

```bash
# clone repo
git clone https://github.com/TrevorDArcyEvans/swig-cpp-csharp-example.git

# switch to code directory
cd swig-cpp-csharp-example

# compile C++ code
cd animalcpp
mkdir build
cd build
cmake ..
cmake --build .

# compile C# code
cd ../..
cd dotNetSample
dotnet run

# output
Kermit
Kermit is walking...
```

# Further Work

- add STL vector example

# Useful links

- [SWIG](https://www.swig.org/index.html)

- [SWIG](https://www.swig.org/index.html)

- [SWIG tutorial](https://www.swig.org/tutorial.html)

- [SWIG std::string](https://swig-experimental.readthedocs.io/en/latest/Manual/Library.html#std-string)

- [SWIG std::vector](https://swig-experimental.readthedocs.io/en/latest/Manual/Library.html#std-vector)

# Acknowledgements

- [Example for SWIG to wrap C++ library in .Net 6](https://iamsorush.com/posts/cpp-csharp-swig/)
