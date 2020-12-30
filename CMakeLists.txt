project(chapterFirstExample)
cmake_minimum_required(VERSION 2.6)

include_directories(
   $ENV{GOOGLETEST_HOME}/googletest/include
   $ENV{GOOGLETEST_HOME}/googlemock/include
)
link_directories($ENV{GOOGLETEST_HOME}/mybuild $ENV{GOOGLETEST_HOME}/gtest/mybuild)
add_definitions(-std=c++0x)
set(CMAKE_CXX_FLAGS "${CMAXE_CXX_FLAGS} -Wall")

set(sources
   main.cpp
   SoundexTest.cpp)
add_executable(test ${sources})
target_link_libraries(test pthread)
target_link_libraries(test gmock)
target_link_libraries(test gtest)
