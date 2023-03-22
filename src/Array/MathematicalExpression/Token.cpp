//
// Created by Olcay Taner YILDIZ on 22.03.2023.
//

#include "Token.h"

Token::Token(int operand) {
    this->type = TokenType::OPERAND;
    this->operand = operand;
}

Token::Token(char _operator) {
    this->type = TokenType::OPERATOR;
    this->_operator = _operator;
    switch (_operator) {
        case '(':
            precedence = 0;
            break;
        case '+':
        case '-':
            precedence = 1;
            break;
        case '*':
        case '/':
            precedence = 2;
            break;
        case ')':
            precedence = 3;
            break;
    }
}

Token::Token() {

}

TokenType Token::getType() {
    return type;
}

int Token::getOperand() {
    return operand;
}

char Token::getOperator() {
    return _operator;
}

int Token::getPrecedence() {
    return precedence;
}
