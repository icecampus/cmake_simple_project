cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)
project(CMakeSimpleProject VERSION 0.1.0 LANGUAGES CXX C)

set(CMAKE_CXX_STANDARD 20)

add_executable(App main.cpp geometry.h geometry.cpp)
