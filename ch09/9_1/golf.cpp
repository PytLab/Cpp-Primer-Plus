//#include "golf.h"
#include <cstring>
#include <iostream>

const int Len = 40;
struct golf{
    char fullname[Len];
    int handicap;
};

void setgolf(golf & g, const char * name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}

int setgolf(golf & g)
{
    std::cout << "Enter fullname: ";
    std::cin.getline(g.fullname, Len);
    if(g.fullname[0])
    {
        std::cout << "Enter handicap: ";
        std::cin >> g.handicap;
        std::cin.get();
        return 1;
    }
    else
        return 0;
}

void handicap(golf & g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf & g)
{
    std::cout << "fullname: " << g.fullname << std::endl;
    std::cout << "handicap: " << g.handicap << std::endl;
}
