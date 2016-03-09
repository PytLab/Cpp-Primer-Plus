#include <iostream>
#include "person.h"

void Person::Data() const
{
    std::cout << firstname << std::endl;
    std::cout << lastname << std::endl;
}

void Person::Show() const
{
    Data();
}

void Person::Set()
{
    std::cout << "Enter firstname: ";
    std::cin >> firstname;
    std::cout << "Enter lastname: ";
    std::cin >> lastname;
}
