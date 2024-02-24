cmake_minimum_required(VERSION 3.14)
project(A)

add_executable(A
    A.cpp
)

target_link_options(A PRIVATE "/SUBSYSTEM:CONSOLE")

target_include_directories(A PRIVATE
    ${CMAKE_SOURCE_DIR}/B
    ${CMAKE_SOURCE_DIR}/C
)

target_link_libraries(A PRIVATE
    B
    C
)
