cmake_minimum_required(VERSION 3.6)
project(Minor_kmint)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        src/main.cpp
        src/Config.h
        src/ExampleGameObject.cpp src/ExampleGameObject.h
        src/FWApplication.cpp src/FWApplication.h
        src/IGameObject.h
        src/graph/Vertex.cpp src/graph/Vertex.hpp
        src/graph/CoordinateInt.hpp
        src/graph/Graph.cpp src/graph/Graph.hpp
        src/graph/Edge.cpp src/graph/Edge.hpp
        src/graph/SummonersRift.cpp src/graph/SummonersRift.hpp
        src/graph/Buney.cpp src/graph/Buney.hpp
        src/RandomUtil.hpp src/RandomUtil.cpp
)

add_executable(Minor_kmint ${SOURCE_FILES})