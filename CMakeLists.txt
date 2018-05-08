# cmake_minimum_required(VERSION <specify CMake version here>)
project(Jenkins_automated_build)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_EXE main.cpp)

add_executable(main ${SOURCE_EXE})