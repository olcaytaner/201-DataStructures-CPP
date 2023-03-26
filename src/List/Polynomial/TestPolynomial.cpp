//
// Created by Olcay Taner YILDIZ on 26.03.2023.
//

#include <iostream>
#include "Polynomial.h"

int main(){
    Polynomial polynomial1 = Polynomial();
    polynomial1.insertLast(new TermNode( Term(4, 5)));
    polynomial1.insertLast(new TermNode( Term(3, 2)));
    polynomial1.insertLast(new TermNode(Term(-7, 1)));
    polynomial1.insertLast(new TermNode( Term(8, 0)));
    cout << polynomial1.to_string() << endl;
    Polynomial polynomial2 = Polynomial();
    polynomial2.insertLast(new TermNode(Term(2, 4)));
    polynomial2.insertLast(new TermNode(Term(6, 2)));
    polynomial2.insertLast(new TermNode(Term(7, 1)));
    cout << polynomial2.to_string() << endl;
    Polynomial result = polynomial1.add(polynomial2);
    cout << result.to_string() << endl;
}