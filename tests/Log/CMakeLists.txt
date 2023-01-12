# build the unit test executable.
set (CMAKE_CXX_COMPILER "/usr/bin/clang++-12")
set(CURRENT_EXE_NAME logger)
set(CMAKE_CXX_FLAGS "-g -O0 -Wall -fprofile-arcs -ftest-coverage")
add_compile_options(-Wall -Wextra -Wpedantic -Werror -fexperimental-new-pass-manager -fpass-plugin=/usr/lib/mull-ir-frontend-12 -g -grecord-command-line)
set(SOURCE_FILES
    main.cpp
    LogTest.cpp
    ../../src/Log/Logger.cpp
    )
add_executable(${CURRENT_EXE_NAME} ${SOURCE_FILES})
add_dependencies(${CURRENT_EXE_NAME} cpputest)
target_include_directories(${CURRENT_EXE_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/src)
target_link_libraries(${CURRENT_EXE_NAME} CppUTest CppUTestExt)
include_directories("../../includes")

# add the test to the project to be run by ctest. 
add_test(logger_test ${CURRENT_EXE_NAME})