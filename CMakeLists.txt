cmake_minimum_required(VERSION 3.6)
project(PrintCharIntPairs)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -std=c++14")

set(SOURCE_FILES main.cpp)
add_executable(PrintCharIntPairs ${SOURCE_FILES})