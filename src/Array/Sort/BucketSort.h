//
// Created by Olcay Taner YILDIZ on 27.05.2023.
//

#ifndef DATASTRUCTURES_CPP_BUCKETSORT_H
#define DATASTRUCTURES_CPP_BUCKETSORT_H


#include "Sort.h"

class BucketSort : public Sort{
private:
    int maxValue;
public:
    explicit BucketSort(int maxValue);
    void sort(int* A, int size) override;
};


#endif //DATASTRUCTURES_CPP_BUCKETSORT_H
