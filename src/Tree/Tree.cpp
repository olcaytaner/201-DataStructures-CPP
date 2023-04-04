//
// Created by Olcay Taner YILDIZ on 1.04.2023.
//

#include "Tree.h"

Tree::Tree() {
    root = nullptr;
}

TreeNode *Tree::getRoot() const{
    return root;
}

void Tree::setRoot(TreeNode *_root) {
    this->root = _root;
}

Tree::~Tree() {
    delete root;
}

TreeNode *Tree::recursiveSearch(int value) {
    if (root != nullptr){
        return root->recursiveSearch(value);
    } else {
        return nullptr;
    }
}

TreeNode *Tree::iterativeSearch(int value) {
    TreeNode *tmp = root;
    while (tmp != nullptr){
        if (value < tmp->getData()){
            tmp = tmp->getLeft();
        } else {
            if (value > tmp->getData()){
                tmp = tmp->getRight();
            } else {
                return tmp;
            }
        }
    }
    return nullptr;
}

TreeNode *Tree::iterativeMinSearch() {
    TreeNode* tmp = root;
    TreeNode* parent = nullptr;
    while (tmp != nullptr) {
        parent = tmp;
        tmp = tmp->getLeft();
    }
    return parent;
}

TreeNode *Tree::iterativeMaxSearch() {
    TreeNode* tmp = root;
    while (tmp != nullptr) {
        if (tmp->getRight() == nullptr){
            return tmp;
        }
        tmp = tmp->getRight();
    }
    return nullptr;
}

TreeNode *Tree::recursiveMinSearch() {
    if (root != nullptr){
        return root->recursiveMinSearch();
    }
    return nullptr;
}

TreeNode *Tree::recursiveMaxSearch() {
    if (root != nullptr){
        return root->recursiveMaxSearch();
    }
    return nullptr;
}

void Tree::inorder() {
    if (root != nullptr){
        root->inorder();
    }
}

void Tree::preorder() {
    if (root != nullptr){
        root->preorder();
    }
}

void Tree::postorder() {
    if (root != nullptr){
        root->postorder();
    }
}

void Tree::iterativeInsert(TreeNode *node) {
    TreeNode *parent = nullptr;
    TreeNode *tmp = root;
    while (tmp != nullptr) {
        parent = tmp;
        if (node->getData() < tmp->getData()){
            tmp = tmp->getLeft();
        } else {
            tmp = tmp->getRight();
        }
    }
    if (parent == nullptr){
        root = node;
    } else {
        if (node->getData() < parent->getData()){
            parent->setLeft(node);
        } else {
            parent->setRight(node);
        }
    }
}

void Tree::prettyPrint() {
    if (root != nullptr){
        root->prettyPrint(0);
    }
}
