//
// Created by Olcay Taner YILDIZ on 12.04.2023.
//

#ifndef DATASTRUCTURES_CPP_BTREENODE_H
#define DATASTRUCTURES_CPP_BTREENODE_H


class BTreeNode {
private:
    int* K;
    BTreeNode** children;
    int m;
    int d;
    bool leaf;
    int position(int value);
public:
    explicit BTreeNode(int d);
    ~BTreeNode();
    BTreeNode* search(int value);
};


#endif //DATASTRUCTURES_CPP_BTREENODE_H
