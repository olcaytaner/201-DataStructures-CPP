//
// Created by Olcay Taner YILDIZ on 18.04.2023.
//

#include "Hash.h"

namespace list {

    int Hash::hashFunction(int value) {
        return value % N;
    }

    Hash::Hash(int N) {
        table = new LinkedList[N];
        for (int i = 0; i < N; i++){
            table[i] = LinkedList();
        }
        this->N = N;
    }

    Node *Hash::search(int value) {
        int address;
        address = hashFunction(value);
        return table[address].search(value);
    }

    void Hash::insert(int value) {
        int address;
        address = hashFunction(value);
        table[address].insertLast(new Node(value));
    }

    void Hash::insert(Node *node) {
        int address;
        address = hashFunction(node->getData());
        table[address].insertLast(node);
    }

    void Hash::deleteValue(int value) {
        int address;
        if (search(value) != nullptr){
            address = hashFunction(value);
            table[address].deleteValue(value);
        }
    }
}
