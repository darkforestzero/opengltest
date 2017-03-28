cmake_minimum_required(VERSION 3.0.0)
project(opengltest VERSION 0.0.0)

SET (CMAKE_CXX_COMPILER             "/usr/bin/clang++")
SET(CMAKE_CXX_STANDARD 14)
add_executable(opengltest test.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
