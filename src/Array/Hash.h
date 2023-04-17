//
// Created by Olcay Taner YILDIZ on 17.04.2023.
//

#ifndef DATASTRUCTURES_CPP_HASH_H
#define DATASTRUCTURES_CPP_HASH_H


#include "MathematicalExpression/Element.h"

class Hash {
private:
    Element** table;
    bool* deleted;
    int N;
    int hashFunction(int value);
public:
    explicit Hash(int N);
    ~Hash();
};


#endif //DATASTRUCTURES_CPP_HASH_H
