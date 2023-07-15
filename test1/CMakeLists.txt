cmake_minimum_required(VERSION 3.15)

project(test1 C)

#包含头文件
include_directories(${CMAKE_SOURCE_DIR}/operation/inc)

#包含函数库
add_subdirectory(${CMAKE_SOURCE_DIR}/operation)

#输出可执行文件的输出路径
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/build/bin)

#生成可执行文件
add_executable(test1 main.c)

#链接函数库
target_link_libraries(test1 operation)