cmake_minimum_required(VERSION 3.17)

set(This Algorithms)

# set the project name and version
project(${This} VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)



add_subdirectory(googletest)

set(Headers
    stack/stack.h

)

set(Sources
    stack/stack.cpp

)

add_library(${This} STATIC ${Sources} ${Headers})

enable_testing()

add_subdirectory(test)