cmake_minimum_required(VERSION 3.1.0)

# set the project name and version
project(Banking VERSION 1.0)

enable_testing()
# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# configure a header file to pass the version number only
configure_file(BankingConfig.h.in BankingConfig.hpp)

add_subdirectory(banking)


