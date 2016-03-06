#include "classic.h"
#include <iostream>
#include <cstring>

// base class methods
Cd::Cd(const char * s1, const char * s2, int n, double x)
{
    performers = new char [std::strlen(s1) + 1];
    std::strcpy(performers, s1);
    label = new char [std::strlen(s2) + 1];
    std::strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd & d)
{
    performers = new char [std::strlen(d.performers) + 1];
    std::strcpy(performers, d.performers);

    label = new char [std::strlen(d.label) + 1];
    std::strcpy(label, d.label);

    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd()
{
    performers = new char [1];
    performers[0] = '\0';
    label = new char [1];
    label[0] = '\0';
    selections = 0;
    playtime = 0.0;
}

Cd::~Cd()
{
    delete [] performers;
    delete [] label;
}

void Cd::Report() const
{
    std::cout << "performers: " << performers << std::endl;
    std::cout << "label: " << label << std::endl;
    std::cout << "selections: " << selections << std::endl;
    std::cout << "playtime: " << playtime << std::endl;
}

// overloaded functions
Cd & Cd::operator=(const Cd & d)
{
    if (this == &d)
        return *this;

    delete [] performers;
    performers = new char [std::strlen(d.performers) + 1];
    std::strcpy(performers, d.performers);

    delete [] label;
    label = new char [std::strlen(d.label) + 1];
    std::strcpy(label, d.label);

    selections = d.selections;
    playtime = d.playtime;

    return *this;
}

// Classic class methods
Classic::Classic(const char * w, const char * s1, const char * s2, int n, double x)
    : Cd(s1, s2, n, x)
{
    works = new char [std::strlen(w) + 1];
    std::strcpy(works, w);
}

Classic::Classic(const Classic & c)
    : Cd(c)
{
    works = new char [std::strlen(c.works) + 1];
    std::strcpy(works, c.works);
}

Classic::Classic()  // call default construct funtion of base class
{
    works = new char [1];
    works[0] = '\0';
}

Classic::~Classic()
{
    delete [] works;
}

void Classic::Report() const
{
    Cd::Report();
    std::cout << "works: " << works << std::endl;
}

// overloaded functions
Classic & Classic::operator=(const Classic & c)
{
    if (this == &c)
        return *this;

    Cd::operator=(c);
    delete [] works;
    works = new char [std::strlen(c.works) + 1];
    std::strcpy(works, c.works);

    return *this;
}
