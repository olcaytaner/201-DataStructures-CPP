//
// Created by Olcay Taner YILDIZ on 10.04.2023.
//

#ifndef DATASTRUCTURES_CPP_AVLTREE_H
#define DATASTRUCTURES_CPP_AVLTREE_H


#include "Tree.h"
#include "AvlTreeNode.h"

class AvlTree : public Tree{
public:
    AvlTree();
    ~AvlTree();
    void insert(AvlTreeNode* node);
private:
    int getHeight(AvlTreeNode* node);
    AvlTreeNode* rotateLeft(AvlTreeNode* k2);
    AvlTreeNode* rotateRight(AvlTreeNode* k1);
    AvlTreeNode* doubleRotateLeft(AvlTreeNode* k3);
    AvlTreeNode* doubleRotateRight(AvlTreeNode* k1);
};


#endif //DATASTRUCTURES_CPP_AVLTREE_H
