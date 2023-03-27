cmake_minimum_required(VERSION 3.23)
project(DataStructures_CPP)

set(CMAKE_CXX_STANDARD 17)

add_library(DataStructures_CPP src/List/Node.cpp src/List/Node.h src/List/LinkedList.cpp src/List/LinkedList.h src/List/DoublyNode.cpp src/List/DoublyNode.h src/List/DoublyLinkedList.cpp src/List/DoublyLinkedList.h src/Array/Element.cpp src/Array/Element.h src/Array/Stack.cpp src/Array/Stack.h src/List/Stack.cpp src/List/Stack.h src/Array/Queue.cpp src/Array/Queue.h src/List/Queue.cpp src/List/Queue.h)
add_executable(Test src/List/Node.cpp src/List/Node.h src/List/LinkedList.cpp src/List/LinkedList.h Test/LinkedListTest.cpp src/List/DoublyNode.cpp src/List/DoublyNode.h src/List/DoublyLinkedList.cpp src/List/DoublyLinkedList.h src/Array/Element.cpp src/Array/Element.h src/Array/Stack.cpp src/Array/Stack.h src/List/Stack.cpp src/List/Stack.h)
add_executable(MathematicalExpressionTest src/Array/MathematicalExpression/TokenType.h src/Array/MathematicalExpression/Token.cpp src/Array/MathematicalExpression/Token.h src/Array/MathematicalExpression/Element.h src/Array/MathematicalExpression/Element.cpp src/Array/MathematicalExpression/Stack.h src/Array/MathematicalExpression/Stack.cpp src/Array/MathematicalExpression/Evaluate.cpp)
add_executable(TestPolynomial src/List/Polynomial/TestPolynomial.cpp src/List/Polynomial/Term.cpp src/List/Polynomial/Term.h src/List/Polynomial/TermNode.cpp src/List/Polynomial/TermNode.h src/List/Polynomial/Polynomial.cpp src/List/Polynomial/Polynomial.h)