#ifndef WINE_H_
#define WINE_H_

#include <iostream>
#include <valarray>
#include <string>
#include "pair.h"

class Wine
{
private:
    typedef std::valarray<int> ArrayInt;
    typedef Pair<ArrayInt, ArrayInt> PairArray;
    std::string label;
    PairArray data;
    int years;  // number of years

public:
    Wine();
    Wine(const char * l, int y, const int yr[], const int bot[]);
    Wine(const char * l, int y);
    Wine(const Wine & w);
    void GetBottles();
    const std::string & Label() const { return label; }
    int sum() const;
    void Show() const;
};

#endif
