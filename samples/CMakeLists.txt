cmake_minimum_required(VERSION 3.16)
set(CMAKE_CONFIGURATION_TYPES "Debug;Development;Shipping" CACHE STRING "" FORCE) 
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(0_ClearWindow 0_ClearWindow/clearWindow.cpp)
target_link_libraries(0_ClearWindow hexcell)

add_executable(1_HelloTriangle 1_HelloTriangle/helloTriangle.cpp)
target_link_libraries(1_HelloTriangle hexcell)

add_executable(2_Sprites2D 2_Sprites2D/sprites2D.cpp)
target_link_libraries(2_Sprites2D hexcell)