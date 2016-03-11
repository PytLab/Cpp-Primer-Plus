#ifndef EXCEPTION_H_
#define EXCEPTION_H_

#include <stdexcept>

class HmeanExcp : public std::logic_error
{
public:
    HmeanExcp() : std::logic_error("hmean() invalid arguments: a = -b\n")
    {
    }
};

class GmeanExcp : public std::logic_error
{
public:
    GmeanExcp() : std::logic_error("gmean() arguments should be >= 0\n")
    {
    }
};

#endif

