//
// Created by Olcay Taner YILDIZ on 20.03.2023.
//

#include "Stack.h"

Stack::Stack() {
    top = nullptr;
}

void Stack::push(Node *node) {
    node->setNext(top);
    top = node;
}

bool Stack::isEmpty() {
    return top == nullptr;
}

Node* Stack::peek(){
    return top;
}

Node* Stack::pop(){
    Node* topNode = top;
    top = top->getNext();
    return topNode;
}