cmake_minimum_required(VERSION 3.6)
project(RomanNumeral)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp roman.h romanImp.cpp)
add_executable(RomanNumeral ${SOURCE_FILES})