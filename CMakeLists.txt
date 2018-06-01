cmake_minimum_required(VERSION 3.10)
project(LinearReg)

set(CMAKE_CXX_STANDARD 11)

# Load in specified order
include_directories(include)
add_subdirectory(source)
enable_testing()