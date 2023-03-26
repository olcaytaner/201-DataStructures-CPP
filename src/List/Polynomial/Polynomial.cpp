//
// Created by Olcay Taner YILDIZ on 26.03.2023.
//

#include "Polynomial.h"

Polynomial::Polynomial() {
    head = nullptr;
    tail = nullptr;
}

void Polynomial::insertLast(TermNode *newTermNode) {
    if (head == nullptr) {
        head = newTermNode;
    } else {
        tail->setNext(newTermNode);
    }
    tail = newTermNode;
}

string Polynomial::to_string() {
    string result;
    TermNode* tmp = head;
    while (tmp != nullptr) {
        result += tmp->to_string() + " ";
        tmp = tmp->getNext();
    }
    return result;
}

Polynomial Polynomial::add(Polynomial polynomial) {
    TermNode *i, *j, *k, *node;
    Polynomial result;
    int coefficient, degree;
    i = head;
    j = polynomial.head;
    result = Polynomial();
    while (i != nullptr && j != nullptr){
        if (i->getData().degree == j->getData().degree){
            coefficient = i->getData().coefficient + j->getData().coefficient;
            degree = i->getData().degree;
            i = i->getNext();
            j = j->getNext();
        } else
        if (i->getData().degree > j->getData().degree){
            coefficient = i->getData().coefficient;
            degree = i->getData().degree;
            i = i->getNext();
        } else {
            coefficient = j->getData().coefficient;
            degree = j->getData().degree;
            j = j->getNext();
        }
        if (coefficient != 0){
            node = new TermNode(Term(coefficient, degree));
            result.insertLast(node);
        }
    }
    if (i == nullptr)
        k = j;
    else
        k = i;
    while (k != nullptr){
        node = new TermNode( Term(k->getData().coefficient, k->getData().degree));
        result.insertLast(node);
        k = k->getNext();
    }
    return result;
}
