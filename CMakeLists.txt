cmake_minimum_required(VERSION 3.23)
project(DataStructures_CPP)

set(CMAKE_CXX_STANDARD 17)

add_library(DataStructures_CPP src/Node.cpp src/Node.h src/LinkedList.cpp src/LinkedList.h)
add_executable(Test src/Node.cpp src/Node.h src/LinkedList.cpp src/LinkedList.h Test/LinkedListTest.cpp)
