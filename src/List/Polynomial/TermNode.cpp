//
// Created by Olcay Taner YILDIZ on 26.03.2023.
//

#include "TermNode.h"

TermNode::TermNode(Term data) {
    this->data = data;
    this->next = nullptr;
}

void TermNode::setNext(TermNode* _next) {
    this->next = _next;
}

TermNode *TermNode::getNext() {
    return next;
}

Term TermNode::getData() {
    return data;
}

string TermNode::to_string() {
    string result;
    if (data.degree != 1 && data.degree != 0){
        return "" + ::to_string(data.coefficient) + "x" + ::to_string(data.degree);
    } else {
        if (data.degree == 1){
            return "" + ::to_string(data.coefficient) + "x";
        } else {
            return "" + ::to_string(data.coefficient);
        }
    }
}
