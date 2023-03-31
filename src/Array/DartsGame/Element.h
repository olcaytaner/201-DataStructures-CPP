//
// Created by Olcay Taner YILDIZ on 20.03.2023.
//

#ifndef DATASTRUCTURES_CPP_ELEMENT_H
#define DATASTRUCTURES_CPP_ELEMENT_H


#include "State.h"

namespace darts{

class Element {
private:
    State data;
public:
    Element();
    explicit Element(const State& data);
    State getData();
};

}

#endif //DATASTRUCTURES_CPP_ELEMENT_H
