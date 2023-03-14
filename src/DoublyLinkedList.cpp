//
// Created by Olcay Taner YILDIZ on 14.03.2023.
//

#include "DoublyLinkedList.h"

void DoublyLinkedList::insertFirst(DoublyNode *newNode) {
    if (tail == nullptr) {
        tail = newNode;
    } else {
        ((DoublyNode*) head)->setPrevious(newNode);
    }
    newNode->setNext(head);
    head = newNode;
}

void DoublyLinkedList::insertMiddle(DoublyNode *newNode, DoublyNode *previous) {
    newNode->setNext(previous->getNext());
    newNode->setPrevious(previous);
    ((DoublyNode*) previous->getNext())->setPrevious(newNode);
    previous->setNext(newNode);
}

void DoublyLinkedList::insertLast(DoublyNode *newNode) {
    if (head == nullptr) {
        head = newNode;
    } else {
        tail->setNext(newNode);
    }
    newNode->setPrevious((DoublyNode*) tail);
    tail = newNode;
}

void DoublyLinkedList::deleteFirst() {
    Node* tmp = head;
    head = head->getNext();
    if (head == nullptr){
        tail = nullptr;
    } else {
        ((DoublyNode*)head)->setPrevious(nullptr);
    }
    delete tmp;
}

void DoublyLinkedList::deleteMiddle(DoublyNode *node) {
    ((DoublyNode*) node->getNext())->setPrevious(node->getPrevious());
    node->getPrevious()->setNext(node->getNext());
    delete node;
}
