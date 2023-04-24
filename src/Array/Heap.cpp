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

HeapNode Heap::deleteMax() {
    HeapNode tmp;
    tmp = array[0];
    array[0] = array[count - 1];
    percolateDown(0);
    count--;
    return tmp;
}

void Heap::percolateDown(int no) {
    int left, right;
    left = 2 * no + 1;
    right = 2 * no + 2;
    while ((left < count && array[no].getData() < array[left].getData()) ||
           (right < count && array[no].getData() < array[right].getData())){
        if (right >= count || array[left].getData() > array[right].getData()){
            swapNode(no, left);
            no = left;
        } else {
            swapNode(no, right);
            no = right;
        }
        left = 2 * no + 1;
        right = 2 * no + 2;
    }
}

void Heap::percolateUp(int no) {
    int parent;
    parent = (no - 1) / 2;
    while (parent >= 0 && array[parent].getData() < array[no].getData()){
        swapNode(parent, no);
        no = parent;
        parent = (no - 1) / 2;
    }
}

void Heap::insert(HeapNode node) {
    count++;
    array[count - 1] = node;
    percolateUp(count - 1);
}

void Heap::update(int k, int newValue) {
    int oldValue = array[k].getData();
    array[k].setData(newValue);
    if (oldValue > newValue){
        percolateDown(k);
    } else {
        percolateUp(k);
    }
}
