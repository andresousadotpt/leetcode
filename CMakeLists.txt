cmake_minimum_required(VERSION 3.28)
project(leetcode)

set(CMAKE_CXX_STANDARD 17)

add_executable(leetcode main.cpp
        find_the_difference/solution.cpp
        utility/utility.cpp
        tests/test.cpp
        utility/colors.cpp
)
