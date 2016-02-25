#include "plorg.h"
#include <iostream>
#include <cstring>

Plorg::Plorg()
{
    strcpy(name, "Plorg");
    ci = 50;
}

void Plorg::reset(const int & c)
{
    ci = c;
}

void Plorg::show() const
{
    std::cout << "name: " << name << std::endl;
    std::cout << "CI: " << ci << std::endl;
}

