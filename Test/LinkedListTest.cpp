//
// Created by Olcay Taner YILDIZ on 9.03.2023.
//

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../src/LinkedList.h"
#include "../src/DoublyLinkedList.h"

TEST_CASE("LinkedListTest-1") {
    LinkedList list = LinkedList();
    list.insertFirst(new Node(4));
    list.insertFirst(new Node(5));
    list.insertFirst(new Node(6));
    cout << list.to_string();
}

TEST_CASE("LinkedListTest-2") {
    DoublyLinkedList list = DoublyLinkedList();
    list.insertFirst(new DoublyNode(4));
    list.insertFirst(new DoublyNode(5));
    list.insertFirst(new DoublyNode(6));
    cout << list.to_string();
}
