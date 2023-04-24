#include <regex>
#include <string>
#include <iostream>

class regexValidator
{
private:
    static std::regex singleDigitRegex;
    static std::regex multiDigitRegex;
    static std::regex negativeSignedRegex;
    static std::regex positiveSignedRegex;
    static std::regex anySignedRegex;
    static std::regex realNumberRegex;
    static std::regex emailRegex;

public:
    static void ValidateSingleDigit();
    static void ValidateMultipleDigits();
    static void ValidateNegativeSignedDigits();
    static void ValidatePositiveSignedDigits();
    static void ValidateAnySignedDigits();
    static void ValidateRealNumber();
    static void ValidateEmailAdress();

    static void ValidateRegex(std::string input, std::regex expression);
};