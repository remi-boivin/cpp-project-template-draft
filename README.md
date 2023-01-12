$\color{#008dff}{\Huge cpp-project-structure}$

A short description of my project.

$\color{#008dff}{\Large Prerequisites}$

1. [CMake](https://cmake.org/)
2. clang compiler

$\color{#008dff}{\Large Directory}$ $\color{#008dff}{\Large \quad structure}$
```
cpp_project_template
├── CMakeLists.txt
├── docs
├── includes
│   └── log.hpp
├── LICENSE
├── README.md
├── src
│   ├── CMakeLists.txt
│   ├── Log
│   │   └── Logger.cpp
│   └── main.cpp
└── tests
    ├── CMakeLists.txt
    ├── cpputest_common.cmake
    ├── cpputest_external_proj.cmake
    └── Log
        ├── CMakeLists.txt
        ├── LogTest.cpp
        └── main.cpp
```

$\color{#008dff}{\Large Building}$ $\color{#008dff}{\Large \quad the}$ $\color{#008dff}{\Large \quad project}$ $\color{#008dff}{\Large \quad on}$ $\color{#008dff}{\Large \quad Linux}$


type:

**```cmake -B build -G "Unix Makefiles"```**

You should have something like this:
```
-- The C compiler identification is GNU 11.3.0
-- The CXX compiler identification is Clang 12.0.1
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/clang++-12 - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: /home/remiboivin/Informatique/cpp-project-template/build
```

then you can type: 

**```cd build && make ```**

You should have something like this: 
```
~/cpputest_example/build (master)$ make
Scanning dependencies of target CppUTest
...
...
...
-- Configuring done
-- Generating done
-- Build files have been written to: /home/remiboivin/Informatique/cpputest_example/build
[  5%] Building C object src/CMakeFiles/cpputest_exasple_pythagorean.dir/main.c.o
[ 11%] Building C object src/CMakeFiles/cpputest_exasple_pythagorean.dir/pythagorean.c.o
[ 17%] Building C object src/CMakeFiles/cpputest_exasple_pythagorean.dir/square_root.c.o
[ 23%] Linking C executable cpputest_exasple_pythagorean
[ 23%] Built target cpputest_exasple_pythagorean
[ 29%] Creating directories for 'cpputest'
[ 35%] Performing download step (git clone) for 'cpputest'
Cloning into 'cpputest'...
[...]

-- Configuring done
-- Generating done
-- Build files have been written to: cpp-project-template/build/tests/cpputest-prefix/src/cpputest-build
[ 58%] Performing build step for 'cpputest'
[...]
[100%] Built target CppUTestExtTests
[ 64%] Performing install step for 'cpputest'
Consolidate compiler generated dependencies of target CppUTest
[ 20%] Built target CppUTest
Consolidate compiler generated dependencies of target CppUTestExt
[ 36%] Built target CppUTestExt
Consolidate compiler generated dependencies of target CppUTestTests
[ 72%] Built target CppUTestTests
Consolidate compiler generated dependencies of target CppUTestExtTests
[100%] Built target CppUTestExtTests
[...]
[ 70%] Completed 'cpputest'
[ 73%] Built target cpputest
[ 80%] Building CXX object tests/Log/CMakeFiles/logger.dir/main.cpp.o
[ 86%] Building CXX object tests/Log/CMakeFiles/logger.dir/LogTest.cpp.o
[ 93%] Building CXX object tests/Log/CMakeFiles/logger.dir/__/__/src/Log/Logger.cpp.o
[100%] Linking CXX executable logger
[100%] Built target logger
```
$\color{#008dff}{\Large Running}$ $\color{#008dff}{\Large \quad the}$ $\color{#008dff}{\Large \quad project}$

Finaly you can run eigher the project

```./src/cpp-project-template```

 or the tests

 ```ctest --output-on-failure --rerun-failed```

----

$\color{#008dff}{\Large Credits}$

Author: [@remi-boivin](https://github.com/remi-boivin)

$\color{#008080}{ Special}$ $\color{#008080}{ \quad thanks}$ $\color{#008080}{ \quad to}$
-