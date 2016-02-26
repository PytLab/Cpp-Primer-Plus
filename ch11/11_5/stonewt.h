// stonewt.h -- definition for the Stonewt class
#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>

class Stonewt
{
public:
    enum Mode {STN, PDS};
private:
    enum {Lbs_per_stn = 14};      // pounds per stone
    int stone;                    // whole stones
    double pds_left;              // fractional pounds
    double pounds;                // entire weight in pounds
    Mode status;
public:
    Stonewt(double lbs, Mode s = STN);          // constructor for double pounds
    Stonewt(int stn, double lbs, Mode s = STN); // constructor for stone, lbs
    Stonewt();                    // default constructor
    ~Stonewt();
    // overloaded functions
    Stonewt operator+(const Stonewt & st) const;
    Stonewt operator-(const Stonewt & st) const;
    Stonewt operator*(double p) const;
    void set_stn() { status = STN; }
    void set_pds() { status = PDS; }
    // friend function
    friend Stonewt operator*(double p, const Stonewt & st)
    { return st * p; }
    friend std::ostream & operator<<(std::ostream & os, const Stonewt & st);
};

#endif
