//
// Created by Olcay Taner YILDIZ on 1.04.2023.
//

#ifndef DATASTRUCTURES_CPP_TREE_H
#define DATASTRUCTURES_CPP_TREE_H


#include "TreeNode.h"

class Tree {
protected:
    TreeNode* root;
public:
    Tree();
    ~Tree();
    TreeNode* getRoot() const;
    void setRoot(TreeNode* _root);
    TreeNode* recursiveSearch(int value);
    TreeNode* iterativeSearch(int value);
    TreeNode* iterativeMinSearch();
    TreeNode* iterativeMaxSearch();
    TreeNode* recursiveMinSearch();
    TreeNode* recursiveMaxSearch();
    void inorder();
    void preorder();
    void postorder();
    void iterativeInsert(TreeNode* node);
    void recursiveInsert(TreeNode* node);
    void prettyPrint();
    int nodeCountWithStack();
    int nodeCountWithQueue();
};


#endif //DATASTRUCTURES_CPP_TREE_H
