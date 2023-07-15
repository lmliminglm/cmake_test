cmake_minimum_required(VERSION 3.15)
#设置工程名
project(operation C)

#包含的头文件
include_directories(./inc)

#搜索当前目录下的所有源文件将名称保存到 DIR_SRCS 变量
# aux_source_directory(./src DIR_SRCS)
file(GLOB_RECURSE DIR_SRCS ./src/*.c)

set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib)

#添加可执行文件
# add_executable(operation example.c ${DIR_SRCS})
add_library(operation SHARED ${DIR_SRCS})

#设置库的输出路径
