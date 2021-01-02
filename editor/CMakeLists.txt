cmake_minimum_required(VERSION 3.16)
set(CMAKE_CONFIGURATION_TYPES "Debug;Development;Shipping" CACHE STRING "" FORCE) 
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(editor WIN32 editor.cpp)
target_link_libraries(editor hexcell)