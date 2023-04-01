//
// Created by Olcay Taner YILDIZ on 1.04.2023.
//

#include "TreeNode.h"

TreeNode::TreeNode(int data) {
    this->data = data;
    this->left = nullptr;
    this->right = nullptr;
}

int TreeNode::getData() const{
    return data;
}

TreeNode *TreeNode::getLeft() const{
    return left;
}

TreeNode *TreeNode::getRight() const{
    return right;
}

TreeNode::~TreeNode() {
    delete left;
    delete right;
}
