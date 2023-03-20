//
// Created by Olcay Taner YILDIZ on 20.03.2023.
//

#ifndef DATASTRUCTURES_CPP_STACK_H
#define DATASTRUCTURES_CPP_STACK_H


#include "Node.h"

class Stack {
private:
    Node* top;
public:
    Stack();
    bool isEmpty();
    Node* peek();
    void push(Node* node);
    Node* pop();
};


#endif //DATASTRUCTURES_CPP_STACK_H
