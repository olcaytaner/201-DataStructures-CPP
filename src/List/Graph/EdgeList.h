//
// Created by Olcay Taner YILDIZ on 8.05.2023.
//

#ifndef DATASTRUCTURES_CPP_EDGELIST_H
#define DATASTRUCTURES_CPP_EDGELIST_H


#include "Edge.h"

class EdgeList {
private:
    Edge* head;
    Edge* tail;
public:
    EdgeList();
    bool isEmpty() const;
    Edge* search(int to) const;
    void addEdge(Edge* newEdge);
};


#endif //DATASTRUCTURES_CPP_EDGELIST_H
