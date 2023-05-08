//
// Created by Olcay Taner YILDIZ on 8.05.2023.
//

#include "EdgeList.h"

EdgeList::EdgeList() {
    head = nullptr;
    tail = nullptr;
}

EdgeList::~EdgeList() {
    Edge *tmp = head;
    Edge *next;
    while (tmp != nullptr) {
        next = tmp->getNext();
        delete tmp;
        tmp = next;
    }
}

bool EdgeList::isEmpty() const {
    return head == nullptr;
}

Edge *EdgeList::search(int to) const{
    Edge* tmp = head;
    while (tmp != nullptr) {
        if (to == tmp->getTo()) {
            return tmp;
        }
        tmp = tmp->getNext();
    }
    return nullptr;
}

void EdgeList::insert(Edge *newEdge) {
    if (head == nullptr) {
        head = newEdge;
    } else {
        tail->setNext(newEdge);
    }
    tail = newEdge;
}
