cmake_minimum_required(VERSION 3.0)

# project name
project(Banking)

#flags

#files
file(GLOB_RECURSE sources CONFIGURE_DEPENDS 
"*.hpp"
"*.cpp"
)

#external libs
find_package(Boost REQUIRED COMPONENTS date_time)

if(Boost_FOUND)
#include
include_directories( ./include ./src )
# executable
add_executable(Banking ${sources} )
endif()
