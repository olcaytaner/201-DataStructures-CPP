//
// Created by Olcay Taner YILDIZ on 27.05.2023.
//

#include "HeapSort.h"
#include "../Heap/MinHeap.h"

void HeapSort::sort(int *A, int size) {
    MinHeap heap = MinHeap(size);
    for (int i = 0; i < size; i++){
        HeapNode heapNode = HeapNode(A[i], i);
        heap.insert(heapNode);
    }
    for (int i = 0; i < size; i++){
        HeapNode heapNode = heap.deleteTop();
        A[i] = heapNode.getData();
    }
}
