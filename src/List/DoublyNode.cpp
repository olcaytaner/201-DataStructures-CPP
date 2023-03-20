//
// Created by Olcay Taner YILDIZ on 13.03.2023.
//

#include "DoublyNode.h"

void DoublyNode::setPrevious(DoublyNode *_previous) {
    previous = _previous;
}

DoublyNode *DoublyNode::getPrevious() {
    return previous;
}

DoublyNode::DoublyNode(int data) : Node(data) {
    previous = nullptr;
}
