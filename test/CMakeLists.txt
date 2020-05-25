cmake_minimum_required(VERSION 3.17)

set(This AlgorithmsTests)


set(Sources
    stack_test.cpp
)


add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC
    gtest_main
    Algorithms
)

add_test(${This} ${This})