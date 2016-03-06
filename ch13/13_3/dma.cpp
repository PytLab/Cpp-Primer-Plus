// dma.cpp --dma class methods

#include "dma.h"
#include <cstring>

// ABC methods
ABC::ABC(const char * l, int r)
{
    label = new char [std::strlen(l) + 1];    
    std::strcpy(label, l);
    rating = r;
}

ABC::ABC(const ABC & a)
{
    label = new char [std::strlen(a.label) + 1];
    std::strcpy(label, a.label);
    rating = a.rating;
}

ABC::~ABC()
{
    delete [] label;
}

void ABC::View() const
{
    std::cout << "label: " << label << std::endl;
    std::cout << "rating: " << rating << std::endl;
} 

// overloaded functions
ABC & ABC::operator=(const ABC & a)
{
    if (this == &a)
        return *this;

    delete [] label;
    label = new char [std::strlen(a.label) + 1];
    std::strcpy(label, a.label);

    rating = a.rating;
}

// friend functions of ABC
std::ostream & operator<<(std::ostream & os, const ABC & a)
{
    os << a.label << ", " << a.rating;
    return os;
}


/*****************
 * baseDMA methods
 *****************/
baseDMA::baseDMA(const char * l, int r)
    : ABC(l, r)
{
}

// no copy constructor function, assignment operator??

std::ostream & operator<<(std::ostream & os, const baseDMA & rs)
{
    os << (const ABC &) rs;
    return os;
}


/******************
 * lacksDMA methods
 ******************/
lacksDMA::lacksDMA(const char * c, const char * l, int r)
    : ABC(l, r)
{
    std::strcpy(color, c);    
}

lacksDMA::lacksDMA(const char * c, const ABC & a)
    : ABC(a)
{
    std::strcpy(color, c);    
}

void lacksDMA::View() const
{
    ABC::View();
    std::cout << color << std::endl;
}

std::ostream & operator<<(std::ostream & os, const lacksDMA & rs)
{
    os << rs.color << ", " << (const ABC &)rs;
    return os;
}


/****************
 * hasDMA methods
 ****************/
hasDMA::hasDMA(const char * s, const char * l, int r)
    : ABC(l, r)
{
    style = new char [std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const char * s, const ABC & c)
    : ABC(c)
{
    style = new char [std::strlen(s) + 1];
    std::strcpy(style, s);
}

hasDMA::hasDMA(const hasDMA & hs)
    : ABC(hs)
{
    style = new char [std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
}

hasDMA::~hasDMA()
{
    delete [] style;
}

void hasDMA::View() const
{
    ABC::View();
    std::cout << style << std::endl;
}

// overloaded functions
hasDMA & hasDMA::operator=(const hasDMA & hs)
{
    if (this == &hs)
        return *this;
    ABC::operator=(hs);
    delete [] style;
    style = new char [std::strlen(hs.style) + 1];
    std::strcpy(style, hs.style);
    
    return *this;
}

std::ostream & operator<<(std::ostream & os, const hasDMA & rs)
{
    os << rs.style << ", " << (const ABC &)rs;
    return os;
}
