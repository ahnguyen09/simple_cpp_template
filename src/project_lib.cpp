#include "project_lib.h"
#include <iostream>

auto romanToInt(const std::string& str) -> int
{
    int res = 0;
    char validB4Char = 0;

    for (auto c = str.crbegin(); c != str.crend(); c++)
    {
        res += (*c == validB4Char) ? -VALUES.at(*c) : VALUES.at(*c);
        validB4Char = VALID_B4.at(*c); 
    }
    return res;
}