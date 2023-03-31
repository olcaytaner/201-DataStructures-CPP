//
// Created by Olcay Taner YILDIZ on 27.03.2023.
//

#ifndef DATASTRUCTURES_CPP_QUEUE_H
#define DATASTRUCTURES_CPP_QUEUE_H

#include "Element.h"

using namespace darts;

class Queue {
private:
    Element *array;
    int first;
    int last;
    int N;
public:
    explicit Queue(int N);

    ~Queue();

    bool isFull() const;

    bool isEmpty() const;

    void enqueue(const Element& element);

    Element dequeue();
};


#endif //DATASTRUCTURES_CPP_QUEUE_H
