//
// Created by Olcay Taner YILDIZ on 27.05.2023.
//

#include "BucketSort.h"

BucketSort::BucketSort(int maxValue) {
    this->maxValue = maxValue;
}

void BucketSort::sort(int *A, int size) {
    int* C = new int[maxValue];
    int* B = new int[size];
    for (int i = 0; i < size; i++){
        C[A[i]]++;
    }
    for (int i = 1; i < maxValue; i++){
        C[i] += C[i - 1];
    }
    for (int i = size - 1; i >= 0; i--){
        B[C[A[i]] - 1] = A[i];
        C[A[i]]--;
    }
    for (int i = 0; i < size; i++){
        A[i] = B[i];
    }
    delete[] C;
    delete[] B;
}
