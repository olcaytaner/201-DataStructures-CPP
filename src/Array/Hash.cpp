//
// Created by Olcay Taner YILDIZ on 17.04.2023.
//

#include "Hash.h"

namespace array {

    int Hash::hashFunction(int value) {
        return value % N;
    }

    Hash::Hash(int N) {
        table = new Element *[N];
        deleted = new bool[N];
        this->N = N;
    }

    Hash::~Hash() {
        for (int i = 0; i < N; i++) {
            delete table[i];
        }
        delete[] deleted;
        delete[] table;
    }

    Element *Hash::search(int value) {
        int address;
        address = hashFunction(value);
        while (table[address] != nullptr){
            if (!deleted[address] && table[address]->getData() == value){
                break;
            }
            address = (address + 1) % N;
        }
        return table[address];
    }

    void Hash::insert(int value) {
        int address;
        address = hashFunction(value);
        while (table[address] != nullptr && !deleted[address]){
            address = (address + 1) % N;
        }
        if (table[address] != nullptr){
            deleted[address] = false;
        }
        table[address] = new Element(value);
    }

    void Hash::deleteValue(int value) {
        int address;
        address = hashFunction(value);
        while (table[address] != nullptr){
            if (!deleted[address] && table[address]->getData() == value){
                break;
            }
            address = (address + 1) % N;
        }
        deleted[address] = true;
    }

}