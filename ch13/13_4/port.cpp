#include <cstring>
#include "port.h"

/************** 
 * Port methods
 **************/
Port::Port(const char * br, const char * st, int b)
{
    brand = new char [std::strlen(br) + 1];
    std::strcpy(brand, br);
    std::strcpy(style, st);
    bottles = b;
}

Port::Port(const Port & p)
{
    brand = new char [std::strlen(p.brand) + 1];
    std::strcpy(brand, p.brand);
    std::strcpy(style, p.style);
    bottles = p.bottles;
}

void Port::Show() const
{
    std::cout << "Brand: " << brand << std::endl;
    std::cout << "Style: " << style << std::endl;
    std::cout << "Bottles: " << bottles << std::endl;
}

// overloaded functions
Port & Port::operator=(const Port & p)
{
    if (this == &p)
        return *this;
    delete [] brand;
    brand = new char [std::strlen(p.brand) + 1];
    std::strcpy(brand, p.brand);
    std::strcpy(style, p.style);
    bottles = p.bottles;
}

Port & Port::operator+=(int b)
{
    bottles += b;
    return *this;
}

Port & Port::operator-=(int b)
{
    bottles -= b;
    return *this;
}

// friend functions
std::ostream & operator<<(std::ostream & os, const Port & p)
{
    os << p.brand << ", " << p.style << ", " << p.bottles;
    return os;
}


/*********************
 * VintagePort methods
 *********************/

VintagePort::VintagePort(const char * br, int b, const char * nn, int y)
    : Port(br, "vintage", b)
{
    nickname = new char [std::strlen(nn) + 1];
    std::strcpy(nickname, nn);
    year = y;
}

VintagePort::VintagePort(const VintagePort & vp)
    : Port(vp)
{
    nickname = new char [std::strlen(vp.nickname) + 1];
    std::strcpy(nickname, vp.nickname);
    year = vp.year;
}

void VintagePort::Show() const
{
    Port::Show();
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Year: " << year << std::endl;
}

// overloaded functions
VintagePort & VintagePort::operator=(const VintagePort & vp)
{
    if (this == &vp)
        return *this;
    Port::operator=(vp);
    delete [] nickname;
    nickname = new char [std::strlen(vp.nickname) + 1];
    std::strcpy(nickname, vp.nickname);
    year = vp.year;

    return *this;
}

std::ostream & operator<<(std::ostream & os, const VintagePort & vp)
{
    os << (const Port &)vp << ", " << vp.nickname << ", " << vp.year;
    return os;
}
