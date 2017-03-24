cmake_minimum_required(VERSION 3.0.0)
project(opengltest VERSION 0.0.0)

add_executable(opengltest test.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
