//
// Created by Olcay Taner YILDIZ on 25.04.2023.
//

#ifndef DATASTRUCTURES_CPP_DHEAP_H
#define DATASTRUCTURES_CPP_DHEAP_H


#include "Heap.h"

class DHeap : public Heap{
protected:
    int d;
public:
    DHeap(int N, int d);
};


#endif //DATASTRUCTURES_CPP_DHEAP_H
