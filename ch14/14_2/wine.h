#ifndef WINE_H_
#define WINE_H_

#include <string>
#include <valarray>
#include <iostream>
#include "pair.h"

class Wine : private std::string,
             private Pair< std::valarray<int>, std::valarray<int> >
{
private:
    typedef std::valarray<int> ArrayInt;
    typedef Pair<ArrayInt, ArrayInt> PairInt;
    int years;

public:
    Wine() {}
    Wine(const char * l, int y, const int yr[], const int bat[])
        : std::string(l), years(y), PairInt(ArrayInt(yr, y), ArrayInt(bat, y)) {}
    Wine(const char * l, int y) 
        : std::string(l), years(y), PairInt(ArrayInt(y), ArrayInt(y)) {}
    // no copy constructor funtion, use default one
    void GetBottles();
    const std::string & Label() const { return (const std::string &)(*this); }
    const int sum() const { return PairInt::second().sum(); }
    void Show() const;
};

#endif
