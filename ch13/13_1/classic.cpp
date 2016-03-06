#include "classic.h"
#include <iostream>
#include <cstring>

// base class methods
Cd::Cd(const char * s1, const char * s2, int n, double x)
{
    std::strcpy(performers, s1);
    std::strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd()
{
    performers[0] = '\0';
    label[0] = '\0';
    selections = 0;
    playtime = 0.0;
}

void Cd::Report() const
{
    std::cout << "performers: " << performers << std::endl;
    std::cout << "label: " << label << std::endl;
    std::cout << "selections: " << selections << std::endl;
    std::cout << "playtime: " << playtime << std::endl;
}

// Classic class methods
Classic::Classic(const char * w, const char * s1, const char * s2, int n, double x)
    : Cd(s1, s2, n, x)
{
    std::strcpy(works, w);
}

Classic::Classic()  // call default construct funtion of base class
{
    works[0] = '\0';
}

void Classic::Report() const
{
    Cd::Report();
    std::cout << "works: " << works << std::endl;
}
