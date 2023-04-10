//
// Created by Olcay Taner YILDIZ on 10.04.2023.
//

#ifndef DATASTRUCTURES_CPP_AVLTREENODE_H
#define DATASTRUCTURES_CPP_AVLTREENODE_H


#include "TreeNode.h"

class AvlTreeNode : public TreeNode{
private:
    int height;
public:
    explicit AvlTreeNode(int data);
    ~AvlTreeNode();
    int getHeight() const;
    void setHeight(int height);
};


#endif //DATASTRUCTURES_CPP_AVLTREENODE_H
