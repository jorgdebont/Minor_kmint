cmake_minimum_required(VERSION 3.6)
project(Minor_kmint)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

file(GLOB_RECURSE SOURCE_FILES
        "src/*.hpp"
        "src/*.cpp"
        "src/*.h"
        )

add_executable(Minor_kmint ${SOURCE_FILES})