cmake_minimum_required(VERSION 3.23)
project(DataStructures_CPP)

set(CMAKE_CXX_STANDARD 17)

add_library(DataStructures_CPP src/List/Node.cpp src/List/Node.h src/List/LinkedList.cpp src/List/LinkedList.h src/List/DoublyNode.cpp src/List/DoublyNode.h src/List/DoublyLinkedList.cpp src/List/DoublyLinkedList.h src/Array/Element.cpp src/Array/Element.h src/Array/Stack.cpp src/Array/Stack.h src/List/Stack.cpp src/List/Stack.h)
add_executable(Test src/List/Node.cpp src/List/Node.h src/List/LinkedList.cpp src/List/LinkedList.h Test/LinkedListTest.cpp src/List/DoublyNode.cpp src/List/DoublyNode.h src/List/DoublyLinkedList.cpp src/List/DoublyLinkedList.h)
