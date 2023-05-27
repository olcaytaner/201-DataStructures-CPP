//
// Created by Olcay Taner YILDIZ on 27.05.2023.
//

#ifndef DATASTRUCTURES_CPP_SHELLSORT_H
#define DATASTRUCTURES_CPP_SHELLSORT_H


#include "Sort.h"

class ShellSort : public Sort{
private:
    int* H;
    int incrementSize;
public:
    ShellSort(int* H, int incrementSize);
    void sort(int* A, int size) override;
};


#endif //DATASTRUCTURES_CPP_SHELLSORT_H
