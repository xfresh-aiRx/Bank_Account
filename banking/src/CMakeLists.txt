# Options for boost
if(WIN32)
    set(Boost_USE_STATIC_LIBS ON)
endif(WIN32)

option(Boost_DEBUG "Set to ON to enable debug output from FindBoost." ON)
option(Boost_DETAILED_FAILURE_MSG "Set to ON to get detailed information" ON)

find_package(Boost 1.75 COMPONENTS date_time)
if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    # add the executable
    add_executable(Banking main.cpp)
    add_definitions(${Boost_LIB_DIAGNOSTIC_DEFINITIONS})
    target_include_directories(Banking PUBLIC ${PROJECT_SOURCE_DIR}/banking/include)
    if(Boost_DATE_TIME_FOUND)
        target_link_libraries(Banking Boost::date_time)    
    endif()
    
endif()

message("Boost_FOUND is ${Boost_FOUND}") #2020-01-15
message("Boost_DATE_TIME_FOUND is ${Boost_DATE_TIME_FOUND}") #2020-01-15
message("Boost_LIBRARIES is ${Boost_LIBRARIES}") #2020-01-15
message("Boost_LIB_DIAGNOSTIC_DEFINITIONS is ${Boost_LIB_DIAGNOSTIC_DEFINITIONS}") #2020-01-15
message("Boost_DIR is ${Boost_DIR}") #2020-01-15
message("Boost_CONFIG is ${Boost_CONFIG}") #2020-01-15
