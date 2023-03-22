//
// Created by Olcay Taner YILDIZ on 20.03.2023.
//

#ifndef DATASTRUCTURES_CPP_ELEMENT_H
#define DATASTRUCTURES_CPP_ELEMENT_H


#include "Token.h"

class Element {
private:
    Token data;
public:
    Element();
    explicit Element(Token data);
    Token getData();
};


#endif //DATASTRUCTURES_CPP_ELEMENT_H
