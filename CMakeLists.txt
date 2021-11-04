cmake_minimum_required(VERSION 3.10)

project(test_cpp_actions VERSION 0.1)

enable_testing()

find_package(GTest CONFIG REQUIRED)

add_subdirectory(src)
add_subdirectory(tests)