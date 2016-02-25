#include <cstring>
#include <iostream>
#include "golf.h"

Golf::Golf()
{
    strcpy(fullname, "Noname");
    handicap = 0;
}

Golf::Golf(const char * name, int hc)
{
    strcpy(fullname, name);
    handicap = hc;
}

const Golf & Golf::setgolf(const Golf & g)
{
    strcpy(fullname, g.fullname);
    handicap = g.handicap;

    return *this;
}

void Golf::showgolf() const
{
    std::cout << "fullname: " << fullname << std::endl;
    std::cout << "handicap: " << handicap << std::endl;
}
