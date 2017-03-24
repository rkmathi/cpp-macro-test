set(CMAKE_VERBOSE_MAKEFILE 1)

cmake_minimum_required(VERSION 3.0)

add_library(libhoge STATIC
    src/libhoge.cpp)

include_directories(include)