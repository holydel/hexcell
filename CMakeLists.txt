cmake_minimum_required(VERSION 3.16)

# test comment

project(hexcell)

include_directories("include/")

#add_library(ermy SHARED source/ermy.cpp)

add_executable(editor source/main.cpp)
#target_link_libraries(editor ermy)