//
// Created by Olcay Taner YILDIZ on 18.05.2023.
//

#ifndef DATASTRUCTURES_CPP_MINDHEAP_H
#define DATASTRUCTURES_CPP_MINDHEAP_H


#include "DHeap.h"

class MinDHeap : public DHeap{
public:
    MinDHeap(int N, int d);
protected:
    void percolateDown(int no) override;
    void percolateUp(int no) override;
};


#endif //DATASTRUCTURES_CPP_MINDHEAP_H
