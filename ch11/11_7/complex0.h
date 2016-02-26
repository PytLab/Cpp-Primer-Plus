#ifndef COMPLEX0_H_
#define COMPLEX0_H_
#include <iostream>

class Complex {
    private:
        double real;
        double img;
    public:
        Complex(double r, double i);
        Complex();
        ~Complex();
        // overloaded functions
        Complex operator+(const Complex & c) const;
        Complex operator-(const Complex & c) const;
        Complex operator*(const Complex & c) const;
        Complex operator*(double n) const;
        Complex operator~() const;
        // friend functions
        friend Complex operator*(double n, const Complex & c);
        friend std::istream & operator>>(std::istream & is, Complex & c);
        friend std::ostream & operator<<(std::ostream & os, const Complex & c);
};

#endif
