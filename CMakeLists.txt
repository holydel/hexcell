cmake_minimum_required(VERSION 3.16)

# test comment

project(hexcell)

include_directories("include/")

add_library(hexcell SHARED source/hexcell.cpp)

add_executable(editor source/editor/editor.cpp)
target_link_libraries(editor hexcell)