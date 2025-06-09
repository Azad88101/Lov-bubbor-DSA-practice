# cmake_minimum_required(VERSION 3.10)
# project(Calculator)

# # Add maths and physics subdirectories (they contain their own CMakeLists.txt)
# add_subdirectory(maths)
# add_subdirectory(physics)

# # Define the executable target
# add_executable(calc
#     main.cpp
#     calculator/src/calculator.cpp
# )

# # Add include directories for calculator, maths, and physics
# target_include_directories(calc PUBLIC
#     ${CMAKE_CURRENT_SOURCE_DIR}/calculator/include
#     ${CMAKE_CURRENT_SOURCE_DIR}/maths/include
#     ${CMAKE_CURRENT_SOURCE_DIR}/physics/include
# )

# # Link the maths and physics libraries
# target_link_libraries(calc maths physics)

cmake_minimum_required(VERSION 3.10)
project(Calculator)

# Include dirs for all libraries
include_directories(
    calculator/include
)

# Add subdirectories
add_subdirectory(maths)
add_subdirectory(physics)

# Create the executable
add_executable(calc
    main.cpp
    calculator/src/calculator.cpp
)

# Link maths and physics (order matters on some platforms)
target_link_libraries(calc PRIVATE maths physics)
