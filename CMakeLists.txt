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
        src/GameObjects/Buney/Buney.cpp src/GameObjects/Buney/Buney.hpp
        src/GameObjects/Cow/Cow.cpp src/GameObjects/Cow/Cow.hpp
        src/RandomUtil.hpp src/RandomUtil.cpp
        src/GameObjects/Movable.cpp src/GameObjects/Movable.hpp
        src/GameObjects/AStar_Vertex.cpp src/GameObjects/AStar_Vertex.hpp
        src/Pathfinding/Pathfinding.cpp src/Pathfinding/Pathfinding.hpp
        src/GameObjects/Cow/CowStates/CowState.cpp src/GameObjects/Cow/CowStates/CowState.hpp
        src/GameObjects/Cow/CowStates/CowChaseState.cpp src/GameObjects/Cow/CowStates/CowChaseState.hpp
        src/GameObjects/Pill/Pill.cpp src/GameObjects/Pill/Pill.hpp
        src/GameObjects/Cow/CowStates/CowWanderState.cpp src/GameObjects/Cow/CowStates/CowWanderState.hpp
        src/GameObjects/Cow/CowStates/CowSearchPillState.cpp src/GameObjects/Cow/CowStates/CowSearchPillState.hpp
        )

add_executable(Minor_kmint ${SOURCE_FILES})