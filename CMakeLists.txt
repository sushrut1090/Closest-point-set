cmake_minimum_required(VERSION 3.21)

set(cmake_cxx_standard 20)
project(Closest-point-set)

# add_executable(Closest-point-set input.cpp)
add_executable(Closest-point-set distance.cpp distance.h)