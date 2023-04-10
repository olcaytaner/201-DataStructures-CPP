//
// Created by Olcay Taner YILDIZ on 10.04.2023.
//

#include "AvlTree.h"

AvlTree::AvlTree() : Tree(){
}

int AvlTree::getHeight(AvlTreeNode *node) {
    if (node == nullptr){
        return 0;
    } else {
        return node->getHeight();
    }
}

int max(int x, int y){
    if (x > y){
        return x;
    }
    return y;
}

AvlTreeNode *AvlTree::rotateLeft(AvlTreeNode* k2) {
    auto* k1 = (AvlTreeNode*) k2->getLeft();
    k2->setLeft(k1->getRight());
    k1->setRight(k2);
    k2->setHeight(max(getHeight((AvlTreeNode*) k2->getLeft()), getHeight((AvlTreeNode*) k2->getRight())) + 1);
    k1->setHeight(max(getHeight((AvlTreeNode*) k1->getLeft()), ((AvlTreeNode*) k1->getRight())->getHeight()) + 1);
    return k1;
}

AvlTreeNode *AvlTree::rotateRight(AvlTreeNode *k1) {
    auto* k2 = (AvlTreeNode*) k1->getRight();
    k1->setRight(k2->getLeft());
    k2->setLeft(k1);
    k2->setHeight(max(getHeight((AvlTreeNode*) k2->getLeft()), ((AvlTreeNode*) k2->getRight())->getHeight()) + 1);
    k1->setHeight(max(getHeight((AvlTreeNode*) k1->getLeft()), getHeight((AvlTreeNode*) k1->getRight())) + 1);
    return k2;
}

AvlTreeNode *AvlTree::doubleRotateLeft(AvlTreeNode *k3) {
    k3->setLeft(rotateRight((AvlTreeNode*) k3->getLeft()));
    return rotateLeft(k3);
}

AvlTreeNode *AvlTree::doubleRotateRight(AvlTreeNode *k1) {
    k1->setRight(rotateLeft((AvlTreeNode*) k1->getRight()));
    return rotateRight(k1);
}
