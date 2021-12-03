#pragma once
#include <iostream>
#include <string>

class CharCounter
{
    private:
        std::string str;

    public:
        /* Takes a string to instantiate the object. */
        CharCounter();
        CharCounter(const std::string&);
        CharCounter(const CharCounter&) = default;
        ~CharCounter() = default;
        /* Returns the length of the string. */
        std::size_t countChars();
        /* Returns the amount of characters of the range 'a-z' or 'A-Z'. */
        int countAlphas();
        /* Returns the amount of characters of the range '0-9'. */
        int countDigits();
        /* Returns the amount of characters that are NOT alphanumeric. */
        int countSpecials();

        CharCounter & operator+(const CharCounter&);
        
        CharCounter & operator=(const CharCounter&) = default;

        friend std::ostream & operator<<(std::ostream & os, CharCounter & cc);
};