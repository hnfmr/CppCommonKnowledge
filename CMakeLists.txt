cmake_minimum_required(VERSION 3.2)

project(CppCommonKnowledge)

if (UNIX)
    set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)
    set(CMAKE_CXX_FLAGS "-Wall -Werror -Wno-unused-variable -pipe -O2 -std=c++14")
endif(UNIX)

add_subdirectory(Item6)
