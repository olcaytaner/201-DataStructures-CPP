//
// Created by Olcay Taner YILDIZ on 31.03.2023.
//

#include "State.h"

State::State(int total, const string &darts) {
    this->total = total;
    this->darts = darts;
}

int State::getTotal() const {
    return total;
}

string State::getDarts() const {
    return darts;
}

State::State() {
}
