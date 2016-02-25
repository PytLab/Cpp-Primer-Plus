#include "person.h"
#include <iostream>

Person::Person(const std::string & lname, const char * fname)
{
    lname_ = lname;
    strcpy(fname_, fname);
}

void Person::show() const
{
    std::cout << fname_ << " " << lname_ << std::endl;
}

void Person::formal_show() const
{
    std::cout << lname_ << ", " << fname_ << std::endl;
}
