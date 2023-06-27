cmake_minimum_required(VERSION 3.22)
project(jj)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ranges ranges.cpp)
add_executable(string_view string_view.cpp)
add_executable(source_location source_location.cpp)