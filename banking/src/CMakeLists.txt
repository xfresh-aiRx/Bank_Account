# Options for boost
if(WIN32)
    set(Boost_USE_STATIC_LIBS ON)
endif(WIN32)

option(Boost_DEBUG "Set to ON to enable debug output from FindBoost." OFF)
option(Boost_DETAILED_FAILURE_MSG "Set to ON to get detailed information" OFF)
set(binary Banking)
file(GLOB sources CONFIGURE_DEPENDS "*.h" "*.cpp")

find_package(Boost 1.65.1 COMPONENTS REQUIRED date_time)
if(Boost_FOUND)
    add_executable(${binary} ${sources})
    target_include_directories(${binary} PUBLIC "/home/ray/projects/Bank_Account/banking/include")
    target_link_libraries(${binary} Boost::date_time)    
endif()

message("${PROJECT_SOURCE_DIR}/banking/include")