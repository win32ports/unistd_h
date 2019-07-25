cmake_minimum_required(VERSION 2.8)

project(unistd_h LANGUAGES C)

add_executable(example example.c unistd.h)

target_include_directories(example PRIVATE ${CMAKE_SOURCE_DIR})
