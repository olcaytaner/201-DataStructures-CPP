//
// Created by Olcay Taner YILDIZ on 31.03.2023.
//

#ifndef DATASTRUCTURES_CPP_STATE_H
#define DATASTRUCTURES_CPP_STATE_H

#include <string>

using namespace  std;

class State {
private:
    int total;
    string darts;
public:
    State();
    State(int total, const string& darts);
    int getTotal() const;
    string getDarts() const;
};


#endif //DATASTRUCTURES_CPP_STATE_H
