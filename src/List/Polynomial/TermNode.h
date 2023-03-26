//
// Created by Olcay Taner YILDIZ on 26.03.2023.
//

#ifndef DATASTRUCTURES_CPP_TERMNODE_H
#define DATASTRUCTURES_CPP_TERMNODE_H

#include <string>
#include "Term.h"

using namespace std;

class TermNode {
private:
    Term data;
    TermNode* next;
public:
    explicit TermNode(Term data);
    void setNext(TermNode* _next);
    TermNode* getNext();
    Term getData();
    string to_string();
};


#endif //DATASTRUCTURES_CPP_TERMNODE_H
