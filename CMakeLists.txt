cmake_minimum_required(VERSION 3.20)

#set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_SOURCE_DIR}/submodules/vcpkg/scripts/buildsystems/vcpkg.cmake
 # CACHE STRING "Vcpkg toolchain file")

project("test-cpp-actions" VERSION 0.0.1)

enable_testing()

find_package(GTest CONFIG REQUIRED)

add_subdirectory(src)
add_subdirectory(tests)
