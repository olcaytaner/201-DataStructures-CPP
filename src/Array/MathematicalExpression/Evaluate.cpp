//
// Created by Olcay Taner YILDIZ on 22.03.2023.
//

#include "Element.h"
#include "Stack.h"
#include <iostream>

using namespace std;

void infixToPostFix(Element *infixExpression, int size) {
    Token e1;
    Stack c = Stack(100);
    for (int i = 0; i < size; i++) {
        Token e = infixExpression[i].getData();
        if (e.getType() == TokenType::OPERAND) {
            cout << e.getOperand() << " ";
        } else {
            if (e.getOperand() == '(') {
                c.push(infixExpression[i]);
            } else {
                if (e.getOperand() == ')') {
                    e1 = c.pop().getData();
                    while (e1.getOperator() != '(') {
                        cout << e1.getOperator() << " ";
                        e1 = c.pop().getData();
                    }
                } else {
                    while (!c.isEmpty() && e.getPrecedence() <= c.peek().getData().getPrecedence()) {
                        e1 = c.pop().getData();
                        cout << e1.getOperator() << " ";
                    }
                    c.push(infixExpression[i]);
                }
            }
        }
    }
    while (!c.isEmpty()) {
        e1 = c.pop().getData();
        cout << e1.getOperator() << " ";
    }
}

Element eval(char ch, int operand1, int operand2) {
    int result = 0;
    switch (ch) {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            result = operand1 / operand2;
            break;
    }
    return Element(Token(result));
}

int evaluate(Element *postfixExpression, int size) {
    Stack c = Stack(100);
    for (int i = 0; i < size; i++) {
        Token e = postfixExpression[i].getData();
        switch (e.getType()) {
            case OPERAND:
                c.push(postfixExpression[i]);
                break;
            case OPERATOR:
                Element e2 = c.pop();
                Element e1 = c.pop();
                Element result = eval(e.getOperator(),
                                      e1.getData().getOperand(), e2.getData().getOperand());
                c.push(result);
                break;
        }
    }
    Element e = c.pop();
    return e.getData().getOperand();
}

int main() {
    auto* postfix = new Element[5];
    postfix[0] = Element(Token(3));
    postfix[1] = Element(Token(4));
    postfix[2] = Element(Token(7));
    postfix[3] = Element(Token('*'));
    postfix[4] = Element(Token('+'));
    cout << evaluate(postfix, 5) << endl;
    delete[] postfix;
    auto* infix = new Element[5];
    infix[0] = Element(Token(3));
    infix[1] = Element(Token('+'));
    infix[2] = Element(Token(4));
    infix[3] = Element(Token('*'));
    infix[4] = Element(Token(7));
    infixToPostFix(infix, 5);
    delete[] infix;
}