//
// Created by Olcay Taner YILDIZ on 1.04.2023.
//

#ifndef DATASTRUCTURES_CPP_TREENODE_H
#define DATASTRUCTURES_CPP_TREENODE_H


class TreeNode {
private:
    TreeNode* left;
    TreeNode* right;
    int data;
public:
    TreeNode(int data);
    ~TreeNode();
    int getData() const;
    TreeNode* getLeft() const;
    TreeNode* getRight() const;
};


#endif //DATASTRUCTURES_CPP_TREENODE_H
