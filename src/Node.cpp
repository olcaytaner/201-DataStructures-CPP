//
// Created by Olcay Taner YILDIZ on 6.03.2023.
//

#include "Node.h"

Node::Node(int data) {
    this->data = data;
    this->next = nullptr;
}

void Node::setNext(Node *_next) {
    this->next = _next;
}

Node *Node::getNext() {
    return next;
}

int Node::getData() {
    return data;
}
