//
// Created by Olcay Taner YILDIZ on 27.03.2023.
//

#include "Queue.h"

namespace list {

    Queue::Queue() {
        first = nullptr;
        last = nullptr;
    }

    Queue::~Queue() {
        Node *tmp = first;
        Node *next;
        while (tmp != nullptr) {
            next = tmp->getNext();
            delete tmp;
            tmp = next;
        }
    }

    bool Queue::isEmpty() {
        return first == nullptr;
    }

    Node *Queue::dequeue() {
        Node *result = first;
        if (!isEmpty()){
            first = first->getNext();
            if (first == nullptr){
                last = nullptr;
            }
        }
        return result;
    }

    void Queue::enqueue(Node *newNode) {
        if (first == nullptr) {
            first = newNode;
        } else {
            last->setNext(newNode);
        }
        last = newNode;
    }
}