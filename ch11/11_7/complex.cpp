#include "complex0.h"

Complex::Complex(double r, double i)
{
    real = r;
    img = i;
}

Complex::Complex()
{
    real = img = 0.0;
}

Complex::~Complex()
{}

Complex Complex::operator+(const Complex & c) const
{
    Complex sum;
    sum.real = real + c.real;
    sum.img = img + c.img;
    return sum;
}

Complex Complex::operator-(const Complex & c) const
{
    Complex diff;
    diff.real = real - c.real;
    diff.img = img - c.img;
    return diff;
}

Complex Complex::operator*(const Complex & c) const
{
    Complex multi;
    multi.real = real*c.real - img*c.img;
    multi.img = real*c.img + img*c.real;
    return multi;
}

Complex Complex::operator*(double n) const
{
    Complex multi;
    multi.real = real * n;
    multi.img = img * n;
    return multi;
}

Complex Complex::operator~() const
{
    Complex conj;
    conj.real = real;
    conj.img = -img;
    return conj;
}

// friend functions
Complex operator*(double n, const Complex & c)
{
    return c*n;
}

std::istream & operator>>(std::istream & is, Complex & c)
{
    std::cout << "real: ";
    is >> c.real;
    std::cout << "imaginary: ";
    is >> c.img;
    return is;
}

std::ostream & operator<<(std::ostream & os, const Complex & c)
{
    os << "(" << c.real << ", " << c.img << "i)";
    return os;
}
