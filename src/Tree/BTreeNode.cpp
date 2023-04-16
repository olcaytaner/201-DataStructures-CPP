//
// Created by Olcay Taner YILDIZ on 12.04.2023.
//

#include "BTreeNode.h"

BTreeNode::BTreeNode(int d) {
    m = 0;
    this->d = d;
    leaf = true;
    K = new int[2 * d + 1];
    children = new BTreeNode*[2 * d + 1];
}

BTreeNode::~BTreeNode() {
    delete[] K;
    for (int i = 0; i < 2 * d + 1; i++){
        delete children[i];
    }
    delete[] children;
}

int BTreeNode::position(int value) {
    if (m == 0){
        return -1;
    }
    if (value > K[m - 1]){
        return m;
    } else {
        for (int i = 0; i < m; i++){
            if (value <= K[i]){
                return i;
            }
        }
    }
    return -1;
}

BTreeNode *BTreeNode::search(int value) {
    if (leaf){
        return this;
    }
    int childNo = position(value);
    if (childNo != -1){
        return children[childNo]->search(value);
    }
    return nullptr;
}
