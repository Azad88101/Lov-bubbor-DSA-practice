# # cmake_minimum_required(VERSION 3.10)
# # project(maths)



# # set(SOURCES  src/maths.cpp)
# # include_directories(include/)


# # add_library(maths STATIC ${SOURCES})

# cmake_minimum_required(VERSION 3.10)
# project(maths)

# set(SOURCES src/maths.cpp)
# # include_directories(include)



# option(ADVANCED_API_ENABLE "this is for advance api " ON)


# if(ADVANCED_API_ENABLE){target_compile_definitions(maths ADVANCED_API)}
# endif()

# add_library(maths STATIC ${SOURCES})

# target_include_directories(maths PUBLIC include)


cmake_minimum_required(VERSION 3.10)
project(maths)

set(SOURCES src/maths.cpp)

option(ADVANCED_API_ENABLE "Enable advanced API features" ON)



add_library(maths STATIC ${SOURCES})

if (ADVANCED_API_ENABLE)
    target_compile_definitions(maths PUBLIC ADVANCED_API)
endif()

target_include_directories(maths PUBLIC include)


