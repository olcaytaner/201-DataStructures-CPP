//
// Created by Olcay Taner YILDIZ on 14.03.2023.
//

#ifndef DATASTRUCTURES_CPP_DOUBLYLINKEDLIST_H
#define DATASTRUCTURES_CPP_DOUBLYLINKEDLIST_H


#include "LinkedList.h"
#include "DoublyNode.h"

class DoublyLinkedList : public LinkedList{
public:
    void insertFirst(DoublyNode* newNode);
    void insertMiddle(DoublyNode* newNode, DoublyNode* previous);
    void insertLast(DoublyNode* newNode);
    void deleteFirst() override;
    void deleteMiddle(DoublyNode* node);
    void deleteLast() override;
};


#endif //DATASTRUCTURES_CPP_DOUBLYLINKEDLIST_H
