cmake_minimum_required(VERSION 3.0)

set(binary BankingTests)

file(GLOB sources CONFIGURE_DEPENDS "*.h" "*.cpp")

find_package(GTest CONFIG REQUIRED)

add_executable(${binary} ${sources})
add_test(NAME ${binary} COMMAND ${binary})
target_link_libraries(${binary} PUBLIC GTest::gtest gtest_main)
