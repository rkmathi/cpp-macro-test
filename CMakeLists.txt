set(CMAKE_VERBOSE_MAKEFILE 1)

cmake_minimum_required(VERSION 3.0)

project(cpp-macro-test CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(cpp-macro-test
    main.cpp)

add_subdirectory(libhoge)

target_link_libraries(cpp-macro-test
    libhoge)

target_compile_options(cpp-macro-test PRIVATE
    -std=c++11
    -Wall
    -Wextra)

