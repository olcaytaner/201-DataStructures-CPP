//
// Created by Olcay Taner YILDIZ on 27.05.2023.
//

#include "SelectionSort.h"

void SelectionSort::sort(int *A, int size) {
    for (int i = 0; i < size - 1; i++){
        int min = A[i];
        int pos = i;
        for (int j = i + 1; j < size; j++){
            if (A[j]< min){
                min = A[j];
                pos = j;
            }
        }
        if (pos != i){
            A[pos] = A[i];
            A[i] = min;
        }
    }
}
