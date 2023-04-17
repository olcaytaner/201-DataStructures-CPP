//
// Created by Olcay Taner YILDIZ on 17.04.2023.
//

#include "Hash.h"

int Hash::hashFunction(int value) {
    return value % N;
}

Hash::Hash(int N) {
    table = new Element*[N];
    deleted = new bool[N];
    this->N = N;
}

Hash::~Hash() {
    for (int i = 0; i < N; i++){
        delete table[i];
    }
    delete[] deleted;
    delete[] table;
}
