//
// Created by Olcay Taner YILDIZ on 8.05.2023.
//

#include "EdgeList.h"

EdgeList::EdgeList() {
    head = nullptr;
    tail = nullptr;
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

void EdgeList::addEdge(Edge *newEdge) {
    if (head == nullptr) {
        head = newEdge;
    } else {
        tail->setNext(newEdge);
    }
    tail = newEdge;
}
