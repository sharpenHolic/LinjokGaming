cmake_minimum_required(VERSION 3.0)

project(LinjokGaming)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)

# The following folder will be included
include_directories(${PROJECT_SOURCE_DIR}/include)
message("PROJECT_SOURCE_DIR: "${PROJECT_SOURCE_DIR})


add_executable(main ${PROJECT_SOURCE_DIR}/main.cpp)