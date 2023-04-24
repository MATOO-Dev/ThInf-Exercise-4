#include <cstddef>
#include <iostream>
#include <string>
#include "include/emailRegex.h"
#include "include/numberRegex.h"

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
    //test();

    #pragma region Task 2.1 

    //single digit natural numbers
    numberRegex::ValidateSingleDigit();
    
    //single or multi digit natural numbers
    numberRegex::ValidateMultipleDigits();

    //"-" or "" signed natural numbers
    numberRegex::ValidateNegativeSignedDigits();

    //"+" or "" signed natural numbers
    numberRegex::ValidatePositiveSignedDigits();

    //"+" or "-" or "" signed natural numbers
    numberRegex::ValidateAnySignedDigits();

    //real numbers
    numberRegex::ValidateRealNumber();

    #pragma endregion
    
    #pragma region Task 2.2 



    #pragma endregion
    return 0;
}