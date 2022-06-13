cmake_minimum_required(VERSION 3.16)
project(IT4182 C)

set(CMAKE_C_STANDARD 99)

include_directories("./include")

file(GLOB SOURCES "src/*.c")

add_executable(IT4182 main.c ${SOURCES})
