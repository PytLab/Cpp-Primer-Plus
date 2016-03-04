#include "cow.h"
#include <cstring>
#include <iostream>

Cow::Cow()
{
    name[0] = '\0';
    hobby = nullptr;
    weight = 0.0;
}

Cow::Cow(const char * nm, const char * ho, double wt)
{
    std::strcpy(name, nm);

    int len;
    len = std::strlen(ho);
    hobby = new char[len];
    std::strcpy(hobby, ho);

    weight = wt;
}

Cow::Cow(const Cow & c)
{
    std::strcpy(name, c.name);

    // add new hobby
    int len;
    len = std::strlen(c.hobby);
    hobby = new char[len];
    std::strcpy(hobby, c.hobby);

    weight = c.weight;
}

Cow & Cow::operator=(const Cow & c)
{
    std::strcpy(name, c.name);

    // free old hobby
    delete [] hobby;
    // add new hobby
    int len;
    len = std::strlen(c.hobby);
    hobby = new char[len];
    std::strcpy(hobby, c.hobby);

    weight = c.weight;

    return *this;
}

void Cow::show() const
{
    std::cout << "name: " << name << std::endl;
    std::cout << "hobby: " << hobby << std::endl;
    std::cout << "weight: " << weight << std::endl;
}
