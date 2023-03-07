//
// Created by Olcay Taner YILDIZ on 6.03.2023.
//

#ifndef DATASTRUCTURES_CPP_NODE_H
#define DATASTRUCTURES_CPP_NODE_H


class Node {
private:
    int data;
    Node* next;
public:
    Node(int data);
    void setNext(Node* _next);
    Node* getNext();
    int getData();
};


#endif //DATASTRUCTURES_CPP_NODE_H
