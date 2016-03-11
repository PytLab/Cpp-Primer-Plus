#ifndef EXCEPTION_H_
#define EXCEPTION_H_

#include <stdexcept>
#include <string>
#include <iostream>

class arg_error : public std::logic_error
{
private:
    double arg1;
    double arg2;
    std::string fname;

public:
    arg_error(double a1 = 0.0, double a2 = 0.0, std::string f = "none",
              std::string msg = "invalid arguments\n")
        : logic_error(msg), arg1(a1), arg2(a2), fname(f)
    {
    }

    void mesg() const;
};

class hmean_error : public arg_error
{
public:
    hmean_error(double a1 = 0.0, double a2 = 0.0, std::string f = "none",
                std::string msg = "invalid arguments\n")
        : arg_error(a1, a2, f, msg)
    {
    }
};

class gmean_error : public arg_error
{
public:
    gmean_error(double a1 = 0.0, double a2 = 0.0, std::string f = "none",
                std::string msg = "invalid arguments\n")
        : arg_error(a1, a2, f, msg)
    {
    }
};

inline void arg_error::mesg() const
{
    std::cout << arg1 << ", " << arg2 << ", " << fname << std::endl;
}

#endif

