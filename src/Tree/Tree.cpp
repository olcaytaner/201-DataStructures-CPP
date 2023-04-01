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
