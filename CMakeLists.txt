cmake_minimum_required(VERSION 3.21)
project(JSON_parser)

set(CMAKE_CXX_STANDARD 14)

add_executable(JSON_parser main.cpp JSON.cpp JSON.h)
