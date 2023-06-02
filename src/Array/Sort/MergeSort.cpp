//
// Created by Olcay Taner YILDIZ on 27.05.2023.
//

#include <climits>
#include "MergeSort.h"

void MergeSort::merge(int *A, int start, int middle, int end) {
    int leftCount = middle - start + 1;
    int rightCount = end - middle;
    int* leftPart = new int[leftCount + 1];
    int* rightPart = new int[rightCount + 1];
    for (int i = 0; i < leftCount; i++){
        leftPart[i] = A[start + i];
    }
    for (int i = 0; i < rightCount; i++){
        rightPart[i] = A[middle + i + 1];
    }
    leftPart[leftCount] = INT_MAX;
    rightPart[rightCount] = INT_MAX;
    int i = 0, j = 0;
    for (int k = start; k <= end; k++){
        if (leftPart[i] <= rightPart[j]){
            A[k] = leftPart[i];
            i++;
        } else {
            A[k] = rightPart[j];
            j++;
        }
    }
    delete[] leftPart;
    delete[] rightPart;
}

void MergeSort::mergeSort(int *A, int first, int last) {
    if (first < last){
        int pivot = (first + last) / 2;
        mergeSort(A, first, pivot);
        mergeSort(A, pivot + 1, last);
        merge(A, first, pivot, last);
    }
}

void MergeSort::sort(int *A, int size) {
    mergeSort(A, 0, size - 1);
}
