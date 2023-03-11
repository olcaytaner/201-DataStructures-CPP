//
// Created by Olcay Taner YILDIZ on 6.03.2023.
//

#include "LinkedList.h"

LinkedList::LinkedList() {
    head = nullptr;
    tail = nullptr;
}

void LinkedList::insertFirst(Node *newNode) {
    if (tail == nullptr) {
        tail = newNode;
    }
    newNode->setNext(head);
    head = newNode;
}

void LinkedList::insertLast(Node *newNode) {
    if (head == nullptr) {
        head = newNode;
    } else {
        tail->setNext(newNode);
    }
    tail = newNode;
}

void LinkedList::insertMiddle(Node *newNode, Node *previous) {
    newNode->setNext(previous->getNext());
    previous->setNext(newNode);
}

Node *LinkedList::search(int value) {
    Node *tmp = head;
    while (tmp != nullptr) {
        if (value == tmp->getData()) {
            return tmp;
        }
        tmp = tmp->getNext();
    }
    return nullptr;
}

Node *LinkedList::getNodeI(int i) {
    Node* tmp = head;
    int index = 0;
    while (tmp != nullptr) {
        if (index == i){
            return tmp;
        }
        index++;
        tmp = tmp->getNext();
    }
    return nullptr;
}

int LinkedList::numberOfElements() {
    Node* tmp = head;
    int count = 0;
    while (tmp != nullptr) {
        count++;
        tmp = tmp->getNext();
    }
    return count;
}

LinkedList::~LinkedList() {
    Node* tmp = head;
    Node *next;
    while (tmp != nullptr) {
        next = tmp->getNext();
        delete tmp;
        tmp = next;
    }
}

string LinkedList::to_string() {
    Node* tmp = head;
    string result;
    while (tmp != nullptr) {
        result += tmp->to_string() + " ";
        tmp = tmp->getNext();
    }
    return result;
}
