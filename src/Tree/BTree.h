//
// Created by Olcay Taner YILDIZ on 12.04.2023.
//

#ifndef DATASTRUCTURES_CPP_BTREE_H
#define DATASTRUCTURES_CPP_BTREE_H


#include "BTreeNode.h"

class BTree {
private:
    BTreeNode* root;
public:
    BTree();
    ~BTree();
    BTreeNode* search(int value);
};


#endif //DATASTRUCTURES_CPP_BTREE_H
