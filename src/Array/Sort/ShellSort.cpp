//
// Created by Olcay Taner YILDIZ on 27.05.2023.
//

#include "ShellSort.h"

ShellSort::ShellSort(int *H, int incrementSize) {
    this->H = H;
    this->incrementSize = incrementSize;
}

void ShellSort::sort(int *A, int size) {
    for (int k = 0; k < incrementSize; k++){
        int increment = H[k];
        for (int j = increment; j < size; j++){
            int t = A[j];
            int i = j - increment;
            while (i >= 0 && A[i] > t){
                A[i + increment] = A[i];
                i -= increment;
            }
            A[i + increment] = t;
        }
    }
}
