#include <regex>
#include <string>
#include <iostream>

class numberRegex
{
private:
    static std::regex singleDigitRegex;
    static std::regex multiDigitRegex;
    static std::regex negativeSignedRegex;
    static std::regex positiveSignedRegex;
    static std::regex anySignedRegex;
    static std::regex realNumberRegex;
    
public:
    static void ValidateSingleDigit();
    static void ValidateMultipleDigits();
    static void ValidateNegativeSignedDigits();
    static void ValidatePositiveSignedDigits();
    static void ValidateAnySignedDigits();
    static void ValidateRealNumber();

    static void ValidateRegex(std::string input, std::regex expression);
};