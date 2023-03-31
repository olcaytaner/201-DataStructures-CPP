//
// Created by Olcay Taner YILDIZ on 20.03.2023.
//

#include "Stack.h"

namespace array{

Stack::Stack(int N) {
    this->N = N;
    array = new Element[N];
    top = -1;
}

Stack::~Stack() {
    delete[] array;
}

bool Stack::isFull() {
    return top == N - 1;
}

bool Stack::isEmpty() {
    return top == -1;
}

Element Stack::peek() {
    return array[top];
}

void Stack::push(Element element) {
    if (!isFull()){
        top++;
        array[top] = element;
    }
}

Element Stack::pop() {
    if (!isEmpty()){
        top--;
        return array[top + 1];
    }
    return Element(0);
}

}
