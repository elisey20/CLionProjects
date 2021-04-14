#include <iostream>
#include "methods.h"

Something::_nested::_nested()
{
    s_mychars.push_back('o');
    s_mychars.push_back('d');
    s_mychars.push_back('d');
    s_mychars.push_back('e');
    s_mychars.push_back('r');
}

void Something::getSomething()
{
    for (int i = 0; i < s_mychars.size(); i++)
        std::cout << s_mychars[i];
}

std::vector<char> Something::s_mychars;
[[maybe_unused]] Something::_nested Something::s_initializer;

void print()
{
    Something::s_mychars[0] = '1';
}