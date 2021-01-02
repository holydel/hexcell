cmake_minimum_required(VERSION 3.16)
set(CMAKE_CONFIGURATION_TYPES "Debug;Development;Shipping" CACHE STRING "" FORCE) 
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# test comment

project(hexcell VERSION 1.0)

include_directories("include/")
add_library(hexcell SHARED source/hexcell.cpp)

add_subdirectory(editor)

add_subdirectory(samples)