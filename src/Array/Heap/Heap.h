//
// Created by Olcay Taner YILDIZ on 24.04.2023.
//

#ifndef DATASTRUCTURES_CPP_HEAP_H
#define DATASTRUCTURES_CPP_HEAP_H


#include "HeapNode.h"

class Heap {
protected:
    HeapNode *array;
    int count;
    int N;
    void swapNode(int index1, int index2);
    virtual void percolateDown(int no) = 0;
    virtual void percolateUp(int no) = 0;
public:
    explicit Heap(int N);
    ~Heap();
    bool isEmpty() const;
    bool isFull() const;
    HeapNode deleteTop();
    void insert(HeapNode node);
    virtual void update(int k, int newValue) = 0;
    int search(int name);
};


#endif //DATASTRUCTURES_CPP_HEAP_H
