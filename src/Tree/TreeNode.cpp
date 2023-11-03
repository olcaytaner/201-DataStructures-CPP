//
// Created by Olcay Taner YILDIZ on 1.04.2023.
//

#include "TreeNode.h"
#include <iostream>

using namespace std;

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

TreeNode *TreeNode::recursiveSearch(int value) {
    if (data == value){
        return this;
    }
    if (value < data){
        if (left != nullptr){
            return left->recursiveSearch(value);
        } else {
            return nullptr;
        }
    } else {
        if (right != nullptr){
            return right->recursiveSearch(value);
        } else {
            return nullptr;
        }
    }
}

TreeNode *TreeNode::recursiveMinSearch() {
    if (left == nullptr){
        return this;
    }
    return left->recursiveMinSearch();
}

TreeNode *TreeNode::recursiveMaxSearch() {
    if (right == nullptr){
        return this;
    }
    return right->recursiveMaxSearch();
}

void TreeNode::preorder() {
    std::cout << data;
    if (left != nullptr){
        left->preorder();
    }
    if (right != nullptr){
        right->preorder();
    }
}

void TreeNode::inorder() {
    if (left != nullptr){
        left->inorder();
    }
    std::cout << data;
    if (right != nullptr){
        right->inorder();
    }
}

void TreeNode::postorder() {
    if (left != nullptr){
        left->postorder();
    }
    if (right != nullptr){
        right->postorder();
    }
    std::cout << data;
}

void TreeNode::setLeft(TreeNode* _left) {
    this->left = _left;
}

void TreeNode::setRight(TreeNode *_right) {
    this->right = _right;
}

void TreeNode::prettyPrint(int level) {
    for (int i = 0; i < level; i++){
        cout << "\t";
    }
    cout << data << endl;
    if (left != nullptr){
        left->prettyPrint(level + 1);
    }
    if (right != nullptr){
        right->prettyPrint(level + 1);
    }
}

void TreeNode::recursiveInsert(TreeNode *node) {
    if (node->getData() < data){
        if (left != nullptr){
            left->recursiveInsert(node);
        } else {
            left = node;
        }
    } else {
        if (right != nullptr){
            right->recursiveInsert(node);
        } else {
            right = node;
        }
    }
}

void TreeNode::setData(int data) {
    this->data = data;
}
