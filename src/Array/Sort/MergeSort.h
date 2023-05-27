//
// Created by Olcay Taner YILDIZ on 27.05.2023.
//

#ifndef DATASTRUCTURES_CPP_MERGESORT_H
#define DATASTRUCTURES_CPP_MERGESORT_H


#include "Sort.h"

class MergeSort : public Sort{
private:
    void merge(int* A, int start, int middle, int end);
    void mergeSort(int* A, int first, int last);
public:
    void sort(int* A, int size) override;
};


#endif //DATASTRUCTURES_CPP_MERGESORT_H
