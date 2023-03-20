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
    bool isEmpty();
    Node* getHead();
    void insertFirst(Node* newNode);
    void insertLast(Node* newNode);
    void insertMiddle(Node* newNode, Node* previous);
    Node* search(int value);
    Node* getNodeI(int i);
    int numberOfElements();

    virtual void deleteFirst();
    Node* getPrevious(Node* node);

    virtual void deleteLast();
    void deleteMiddle(Node* node);
    string to_string();
};


#endif //DATASTRUCTURES_CPP_LINKEDLIST_H
