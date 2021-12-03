#include "counter.h"

CharCounter::CharCounter() : str("") { }

CharCounter::CharCounter(const std::string& str) : str(str) { }

std::size_t CharCounter::countChars()
{
    return str.length();
}

int CharCounter::countAlphas()
{
    int numAlphas = 0;
    for(int i = 0; i < str.length(); ++i)
        if( (str[i] >= 'a' && str[i] <= 'z') ||
            (str[i] >= 'A' && str[i] <= 'Z') )
            ++numAlphas;
    return numAlphas;
}
int CharCounter::countDigits()
{
    int numDigits = 0;
    for(int i = 0; i < str.length(); ++i)
        if(str[i] >= '0' && str[i] <= '9')
            ++numDigits;
    return numDigits;
}
int CharCounter::countSpecials()
{
    return countChars() - (countAlphas() + countDigits());
}

CharCounter & CharCounter::operator+(const CharCounter & rhs)
{
    this->str += rhs.str;
    return *this;
}

std::ostream & operator<<(std::ostream & os, CharCounter & cc)
{
    os << "Alphas: " << cc.countAlphas() << "\n";
    os << "Digits: " << cc.countDigits() << "\n";
    os << "Specials: " << cc.countSpecials() << "\n";
    os << "Total Characters: " << cc.countChars() << "\n";
    return os;
}