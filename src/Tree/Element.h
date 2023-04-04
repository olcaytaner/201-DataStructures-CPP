//
// Created by Olcay Taner YILDIZ on 20.03.2023.
//

#ifndef DATASTRUCTURES_CPP_ELEMENT_H
#define DATASTRUCTURES_CPP_ELEMENT_H

#include "TreeNode.h"

namespace tree {

    class Element {
    private:
        TreeNode* data;
    public:
        Element();

        explicit Element(TreeNode* data);

        TreeNode* getData();
    };

}
#endif //DATASTRUCTURES_CPP_ELEMENT_H
