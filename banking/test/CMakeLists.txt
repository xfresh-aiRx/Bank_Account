cmake_minimum_required(VERSION 3.0)

set(This BankingTests)

set(SOURCES
AllTests.cpp
)

add_executable(${This} ${SOURCES})
target_link_libraries(${This} ${SOURCES})

add_test(NAME ${This}
COMMAND ${This})