//
// Created by Olcay Taner YILDIZ on 24.04.2023.
//

#include "Heap.h"

Heap::Heap(int N) {
    array = new HeapNode[N];
    count = 0;
    this->N = N;
}

bool Heap::isEmpty() const {
    return count == 0;
}

bool Heap::isFull() const {
    return count == N;
}

void Heap::swapNode(int index1, int index2) {
    HeapNode tmpNode;
    tmpNode = array[index1];
    array[index1] = array[index2];
    array[index2] = tmpNode;
}

Heap::~Heap() {
    delete[] array;
}

HeapNode Heap::deleteTop() {
    HeapNode tmp;
    tmp = array[0];
    array[0] = array[count - 1];
    percolateDown(0);
    count--;
    return tmp;
}

void Heap::insert(HeapNode node) {
    count++;
    array[count - 1] = node;
    percolateUp(count - 1);
}

int Heap::search(int name) {
    for (int i = 0; i < count; i++){
        if (array[i].getName() == name){
            return i;
        }
    }
    return -1;
}
