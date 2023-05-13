//
// Created by Olcay Taner YILDIZ on 6.05.2023.
//

#ifndef DATASTRUCTURES_CPP_DISJOINTSET_H
#define DATASTRUCTURES_CPP_DISJOINTSET_H


#include "Set.h"

class DisjointSet {
private:
    Set* sets;
    int count;
public:
    DisjointSet(int* elements, int count);
    DisjointSet(int count);
    ~DisjointSet();
    int findSetRecursive(int index);
    int findSetIterative(int index);
    void unionOfSets(int index1, int index2);
};


#endif //DATASTRUCTURES_CPP_DISJOINTSET_H
