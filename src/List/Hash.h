//
// Created by Olcay Taner YILDIZ on 18.04.2023.
//

#ifndef DATASTRUCTURES_CPP_HASH_H
#define DATASTRUCTURES_CPP_HASH_H


#include "LinkedList.h"

namespace list {

    class Hash {
    private:
        LinkedList *table;
        int N;
        int hashFunction(int value);
    public:
        Hash(int N);
        Node* search(int value);
        void insert(int value);
        void insert(Node* node);
        void deleteValue(int value);
    };

}
#endif //DATASTRUCTURES_CPP_HASH_H
