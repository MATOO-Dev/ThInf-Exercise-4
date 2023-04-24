#include "../include/regexValidator.h"
#include <regex>

// \d = all digits
std::regex regexValidator::singleDigitRegex = std::regex("\\d");
// \d+ = all digits 1-n times
std::regex regexValidator::multiDigitRegex = std::regex("\\d+");
// -? = "-" 0-1 times
std::regex regexValidator::negativeSignedRegex = std::regex("-?\\d+");
// \+? = "+" 0-1 times
std::regex regexValidator::positiveSignedRegex = std::regex("\\+?\\d+");
// (\+|-)? = "+" or "-" 0-1 times
std::regex regexValidator::anySignedRegex = std::regex("(\\+|-)?\\d+");
// combine and add \. for "."
std::regex regexValidator::realNumberRegex = std::regex("(\\+|-)?\\d+\\.\\d+");

//email adress
std::regex regexValidator::emailRegex = std::regex("\\w+(.\\w+)?@\\w+(-\\w+)?\\.\\w+");



void regexValidator::ValidateSingleDigit()
{
    std::cout << "Please enter a single digit, e.g. 5" << std::endl;
    std::string userInput; 
    std::cin >> userInput;
    ValidateRegex(userInput, singleDigitRegex);
}

void regexValidator::ValidateMultipleDigits()
{
    std::cout << "Please enter a single or multiple digits (without a sign), e.g. 559" << std::endl;
    std::string userInput; 
    std::cin >> userInput;
    ValidateRegex(userInput, multiDigitRegex);
}

void regexValidator::ValidateNegativeSignedDigits()
{
    std::cout << "Please enter a single or multiple digits (with or without a minus sign -), e.g. -559" << std::endl;
    std::string userInput; 
    std::cin >> userInput;
    ValidateRegex(userInput, negativeSignedRegex);
}

void regexValidator::ValidatePositiveSignedDigits()
{
    std::cout << "Please enter a single or multiple digits (with or without a plus sign +), e.g. +559" << std::endl;
    std::string userInput; 
    std::cin >> userInput;
    ValidateRegex(userInput, positiveSignedRegex);
}

void regexValidator::ValidateAnySignedDigits()
{
    std::cout << "Please enter a single or multiple digits (with or without a minus - or plus sign +), e.g. -903" << std::endl;
    std::string userInput; 
    std::cin >> userInput;
    ValidateRegex(userInput, anySignedRegex);
}

void regexValidator::ValidateRealNumber()
{
    std::cout << "Please enter a real number (with or without a minus - or plus sign +), e.g. -3.14159" << std::endl;
    std::string userInput; 
    std::cin >> userInput;
    ValidateRegex(userInput, realNumberRegex);
}

void regexValidator::ValidateEmailAdress()
{
    std::cout << "Please enter a valid email adress:" << std::endl;
    std::string userInput; 
    std::cin >> userInput;
    ValidateRegex(userInput, emailRegex);
}

void regexValidator::ValidateRegex(std::string input, std::regex expression)
{
    //check if input matches expression
    bool result = std::regex_match(input, expression, std::regex_constants::match_default);
    //print result to console
    result ? std::cout << "Input ok!" << std::endl : std::cout << "Input wrong!" << std::endl;
    std::cout << std::endl;
}