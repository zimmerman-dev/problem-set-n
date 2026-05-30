cmake_minimum_required(VERSION 3.20)

project(ProblemSet1 C)

set(CMAKE_C_STANDARD 11)

add_executable(problem1 problem1.c)
target_link_libraries(problem1 m)
