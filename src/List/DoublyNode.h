//
// Created by Olcay Taner YILDIZ on 13.03.2023.
//

#ifndef DATASTRUCTURES_CPP_DOUBLYNODE_H
#define DATASTRUCTURES_CPP_DOUBLYNODE_H


#include "Node.h"

class DoublyNode : public Node{
private:
    DoublyNode* previous;
public:
    explicit DoublyNode(int data);
    void setPrevious(DoublyNode* _previous);
    DoublyNode* getPrevious();
};


#endif //DATASTRUCTURES_CPP_DOUBLYNODE_H
