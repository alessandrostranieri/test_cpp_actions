add_executable(test_sum test_sum.cpp)
target_include_directories(test_sum PRIVATE ${CMAKE_SOURCE_DIR}/src)
target_link_libraries(test_sum PUBLIC tcg_math GTest::gmock GTest::gtest GTest::gmock_main GTest::gtest_main)

add_test(NAME test_sum COMMAND test_sum)
