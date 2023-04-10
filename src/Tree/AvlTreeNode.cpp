//
// Created by Olcay Taner YILDIZ on 10.04.2023.
//

#include "AvlTreeNode.h"

AvlTreeNode::AvlTreeNode(int data) : TreeNode(data) {
    this->height = 1;
}

AvlTreeNode::~AvlTreeNode() {
}

int AvlTreeNode::getHeight() const {
    return height;
}

void AvlTreeNode::setHeight(int _height) {
    this->height = _height;
}
