#include <cstddef>
#include <iostream>
#include <string>
#include "include/regexValidator.h"

/*
Task 1
1.1)
L(G1) = {a b c^n}
Regulär?
    Nein, da:
        ∅ ∉ Reg(Σ)
        ε ∉ Reg(Σ)
        r,s ∉ Reg(Σ) ⇏ (r|s) ∉ Reg(Σ)
        da r & s nicht tauschbar sind
Umwandeln:
    Produktionsregeln hinzufügen:
        S -> ε
Regulärer Ausdruck r, der L(r)=L(G1) erzeugt:
*/

int main()
{
    /*
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
    */

    #pragma region Task 2.2 

    regexValidator::ValidateEmailAdress();

    #pragma endregion

    return 0;
}