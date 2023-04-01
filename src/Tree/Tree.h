//
// Created by Olcay Taner YILDIZ on 1.04.2023.
//

#ifndef DATASTRUCTURES_CPP_TREE_H
#define DATASTRUCTURES_CPP_TREE_H


#include "TreeNode.h"

class Tree {
private:
    TreeNode* root;
public:
    Tree();
    ~Tree();
    TreeNode* getRoot() const;
    void setRoot(TreeNode* _root);
};


#endif //DATASTRUCTURES_CPP_TREE_H
