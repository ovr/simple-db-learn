cmake_minimum_required(VERSION 3.4)
project(simple_db_learn)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(simple_db_learn ${SOURCE_FILES})