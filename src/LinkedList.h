//
// Created by Olcay Taner YILDIZ on 6.03.2023.
//

#ifndef DATASTRUCTURES_CPP_LINKEDLIST_H
#define DATASTRUCTURES_CPP_LINKEDLIST_H


#include "Node.h"

class LinkedList {
protected:
    Node* head;
    Node* tail;
public:
    LinkedList();
    ~LinkedList();
    void insertFirst(Node* newNode);
    void insertLast(Node* newNode);
    void insertMiddle(Node* newNode, Node* previous);
    Node* search(int value);
    Node* getNodeI(int i);
    int numberOfElements();
    void deleteFirst();
    Node* getPrevious(Node* node);
    void deleteLast();
    void deleteMiddle(Node* node);
    string to_string();
};


#endif //DATASTRUCTURES_CPP_LINKEDLIST_H
