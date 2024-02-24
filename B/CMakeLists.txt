cmake_minimum_required(VERSION 3.14)
project(B)

add_library(B STATIC
    B.cpp
    B.h
)

target_include_directories(B PRIVATE
    ${CMAKE_SOURCE_DIR}/C
)

target_link_libraries(B PRIVATE
    C
)
