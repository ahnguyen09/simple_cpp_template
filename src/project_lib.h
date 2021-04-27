#pragma once
#include <vector>
#include <unordered_map>
#include <string>

static const std::unordered_map<char, int> VALUES
{
    {'I' , 1},
    {'V' , 5},
    {'X' , 10},
    {'L' , 50},
    {'C' , 100},
    {'D' , 500},
    {'M' , 1000}
};

static const std::unordered_map<char, char> VALID_B4
{
    {'I' , 0},
    {'V' , 'I'},
    {'X' , 'I'},
    {'L' , 'X'},
    {'C' , 'X'},
    {'D' , 'C'},
    {'M' , 'C'}
};


auto romanToInt(const std::string& str) -> int;
