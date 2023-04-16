//
// Created by Olcay Taner YILDIZ on 12.04.2023.
//

#include "BTree.h"

BTree::BTree() {
    root = nullptr;
}

BTree::~BTree() {
    delete root;
}

BTreeNode *BTree::search(int value) {
    if (root != nullptr){
        return root->search(value);
    }
    return nullptr;
}
