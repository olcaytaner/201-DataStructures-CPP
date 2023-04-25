//
// Created by Olcay Taner YILDIZ on 25.04.2023.
//

#ifndef DATASTRUCTURES_CPP_DHEAP_H
#define DATASTRUCTURES_CPP_DHEAP_H


#include "Heap.h"

class DHeap : public Heap{
private:
    int d;
public:
    DHeap(int N, int d);
protected:
    void percolateDown(int no) override;
    void percolateUp(int no) override;
};


#endif //DATASTRUCTURES_CPP_DHEAP_H
