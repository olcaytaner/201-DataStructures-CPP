//
// Created by Olcay Taner YILDIZ on 22.03.2023.
//

#ifndef DATASTRUCTURES_CPP_TOKEN_H
#define DATASTRUCTURES_CPP_TOKEN_H


#include "TokenType.h"

class Token {
private:
    TokenType type;
    int operand;
    char _operator;
    int precedence;
public:
    explicit Token(int operand);
    explicit Token(char _operator);
    Token();
    TokenType getType();
    int getOperand();
    char getOperator();
    int getPrecedence();
};


#endif //DATASTRUCTURES_CPP_TOKEN_H
