//
// Created by Olcay Taner YILDIZ on 20.03.2023.
//

#include "Element.h"
#include "Token.h"

Element::Element(Token data) {
    this->data = data;
}

Token Element::getData() {
    return data;
}

Element::Element() {

}

