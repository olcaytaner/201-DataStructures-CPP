//
// Created by Olcay Taner YILDIZ on 20.03.2023.
//

#include "Element.h"

namespace darts {
    Element::Element(const State &data) {
        this->data = data;
    }

    State Element::getData() {
        return data;
    }

    Element::Element() = default;

}