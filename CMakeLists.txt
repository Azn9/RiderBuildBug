cmake_minimum_required(VERSION 3.14)
project(Test)

# Global settings
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_GENERATOR_PLATFORM x64)
set(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "" FORCE)

# Include subprojects
add_subdirectory(A)
add_subdirectory(B)
add_subdirectory(C)

# Set the startup project
set_property(DIRECTORY PROPERTY VS_STARTUP_PROJECT "A")
