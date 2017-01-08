cmake_minimum_required(VERSION 3.6)
project(dateType)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp dateType.h dateType.cpp)
add_executable(dateType ${SOURCE_FILES})