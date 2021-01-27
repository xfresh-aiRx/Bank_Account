cmake_minimum_required(VERSION 3.1.0)

set(target ${CMAKE_PROJECT_NAME}Tests)

file(GLOB sources CONFIGURE_DEPENDS "*.cpp")

find_package(GTest CONFIG REQUIRED)
find_package(Boost 1.65.1 COMPONENTS REQUIRED date_time)
if(Boost_FOUND)
add_executable(${target} ${sources})
# target_include_directories(${target} PRIVATE ${PROJECT_SOURCE_DIR}/banking/include)
target_link_libraries(${target} PRIVATE GTest::gtest gtest_main ${CMAKE_PROJECT_NAME}_lib ${Boost_LIBRARIES})   
endif()


add_test(NAME ${target} COMMAND ${target})  