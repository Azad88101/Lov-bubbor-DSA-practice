# cmake_minimum_required(VERSION 3.10)
# project(physics)

# # Source file
# set(SOURCES src/physics.cpp)

# # Create a static or shared library (you’re using SHARED)
# add_library(physics SHARED ${SOURCES})
# target_compile_definitions(physics PRIVATE PHYSICS_EXPORTS)

# # Include directory so that physics.h can be found
# target_include_directories(physics PUBLIC include)
cmake_minimum_required(VERSION 3.10)
project(physics)

set(SOURCES src/physics.cpp)

add_library(physics SHARED ${SOURCES})

target_include_directories(physics PUBLIC include)

# This line enables __declspec(dllexport) in the DLL build
target_compile_definitions(physics PRIVATE PHYSICS_EXPORTS)
