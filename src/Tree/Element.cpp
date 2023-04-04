//
// Created by Olcay Taner YILDIZ on 20.03.2023.
//

#include "Element.h"

namespace tree {

    Element::Element(TreeNode* data) {
        this->data = data;
    }

    TreeNode* Element::getData() {
        return data;
    }

    Element::Element() {

    }

}