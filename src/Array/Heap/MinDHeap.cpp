//
// Created by Olcay Taner YILDIZ on 18.05.2023.
//

#include "MinDHeap.h"

void MinDHeap::percolateDown(int no) {
    int child, smallestChild;
    int value;
    do{
        smallestChild = -1;
        value = array[no].getData();
        for (int i = 1; i <= d && d * no + i < count; i++){
            child = d * no + i;
            if (value > array[child].getData()){
                smallestChild = child;
                value = array[child].getData();
            }
        }
        if (smallestChild != -1){
            swapNode(no, smallestChild);
            no = smallestChild;
        } else {
            break;
        }
    } while (true);
}

void MinDHeap::percolateUp(int no) {
    int parent;
    parent = (no - 1) / d;
    while (parent >= 0 && array[parent].getData() > array[no].getData()){
        swapNode(parent, no);
        no = parent;
        parent = (no - 1) / d;
    }
}

MinDHeap::MinDHeap(int N, int d) : DHeap(N, d) {

}
