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
    Node *tmp = head;
    int index = 0;
    while (tmp != nullptr) {
        if (index == i) {
            return tmp;
        }
        index++;
        tmp = tmp->getNext();
    }
    return nullptr;
}

int LinkedList::numberOfElements() {
    Node *tmp = head;
    int count = 0;
    while (tmp != nullptr) {
        count++;
        tmp = tmp->getNext();
    }
    return count;
}

LinkedList::~LinkedList() {
    Node *tmp = head;
    Node *next;
    while (tmp != nullptr) {
        next = tmp->getNext();
        delete tmp;
        tmp = next;
    }
}

string LinkedList::to_string() {
    Node *tmp = head;
    string result;
    while (tmp != nullptr) {
        result += tmp->to_string() + " ";
        tmp = tmp->getNext();
    }
    return result;
}

void LinkedList::deleteFirst() {
    Node* tmp = head;
    head = head->getNext();
    if (head == nullptr){
        tail = nullptr;
    }
    delete tmp;
}

void LinkedList::deleteLast() {
    Node *toBeDeleted = tail;
    tail = getPrevious(tail);
    if (tail != nullptr){
        tail->setNext(nullptr);
    } else {
        head = nullptr;
    }
    delete toBeDeleted;
}

Node *LinkedList::getPrevious(Node *node) {
    Node *tmp = head;
    Node *previous = nullptr;
    while (tmp != node) {
        previous = tmp;
        tmp = tmp->getNext();
    }
    return previous;
}

void LinkedList::deleteMiddle(Node *node) {
    Node* previous;
    previous = getPrevious(node);
    previous->setNext(node->getNext());
    delete node;
}

bool LinkedList::isEmpty() {
    return head == nullptr;
}

Node *LinkedList::getHead() {
    return head;
}

void LinkedList::deleteValue(int value) {
    Node *tmp = head;
    Node *previous = nullptr;
    while (tmp != nullptr) {
        if (tmp->getData() == value){
            if (previous != nullptr){
                previous->setNext(tmp->getNext());
                if (tmp->getNext() == nullptr){
                    tail = previous;
                }
            } else {
                head = tmp->getNext();
                if (head == nullptr){
                    tail = nullptr;
                }
            }
            break;
        }
        previous = tmp;
        tmp = tmp->getNext();
    }
}
