set(MATH_HEADERS "sum.h")
set(MATH_SOURCES "sum.cpp")

add_library(tcg_math ${MATH_HEADERS} ${MATH_SOURCES})
target_include_directories(tcg_math PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
