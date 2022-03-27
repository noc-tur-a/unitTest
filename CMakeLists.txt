cmake_minimum_required(VERSION 3.16)
project(unitTests)

find_library(unitTests_lib unitTests)

#group libraries
set(frameworks ${unitTests_lib})

set(CMAKE_CXX_STANDARD 14)
add_subdirectory(lib/googletest-main)
include_directories(lib/googletest-main/googletest/include)
include_directories(lib/googletest-main/googlemock/include)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
set(SOURCE_FILES main.cpp sample1.cc sample1.h sample1_unittest.cc)


add_executable(unitTests ${SOURCE_FILES})
target_link_libraries(unitTests gtest gtest_main)
#target_link_libraries(unitTests gtest)
