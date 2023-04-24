#include <cstddef>
#include <iostream>
#include <string>
#include "include/regexValidator.h"

/*
Task 1
1.1)
L(G1) = {a b c^n}
Regulär?
    nein, da:
        Z -> Y
        Für regulär darf rechts kein einzelnes Terminal
Umwandeln:
        S -> abX
        X -> Xc
        X -> ε
Regulärer Ausdruck r, der L(r)=L(G1) erzeugt:
    /abc+/

1.2)
L(G2) = {a^n1 b|c d^n2}
Regulär?
    Ja
Regulärer Ausdruck s, der L(s)=L(G2) erzeugt:
    /a+(b|c)d+/

1.3)
t = (a|b)*c
//a oder b 0-unendlich mal, dann 1x c
G3 = L(t)
G3 = ({S,L}, {a,b,c}, P, S) mit P:
I       S -> Lc
II      L -> a|b
III     L -> LL
IV      S -> c | L -> ε
*/

int main()
{
    #pragma region Task 2.1 

    //single digit natural numbers
    regexValidator::ValidateSingleDigit();
    
    //single or multi digit natural numbers
    regexValidator::ValidateMultipleDigits();

    //"-" or "" signed natural numbers
    regexValidator::ValidateNegativeSignedDigits();

    //"+" or "" signed natural numbers
    regexValidator::ValidatePositiveSignedDigits();

    //"+" or "-" or "" signed natural numbers
    regexValidator::ValidateAnySignedDigits();

    //real numbers
    regexValidator::ValidateRealNumber();

    #pragma endregion

    #pragma region Task 2.2 

    regexValidator::ValidateEmailAdress();

    #pragma endregion

    return 0;
}