#include <iostream>
#include "wine.h"

// constructor functions
Wine::Wine() : label("none"), years(0), data(ArrayInt(0), ArrayInt(0))
{
}

Wine::Wine(const char * l, int y, const int yr[], const int bot[])
    : label(l), years(y), data(ArrayInt(yr, y), ArrayInt(bot, y))
{
}

Wine::Wine(const char * l, int y)
    : label(l), years(y), data(ArrayInt(y), ArrayInt(y))
{
}

// no copy constructor funtion, use default one

void Wine::GetBottles() 
{
    int y, b;  // year, bottle

    std::cout << "Enter " << label << " data for " << years << " year(s)" << std::endl;
    for (int i = 0; i < years; ++i)
    {
        std::cout << "Enter year:";
        std::cin >> y;
        data.first()[i] = y;
        std::cout << "Enter bottles for that year: ";
        std::cin >> b;
        data.second()[i] = b;
    }
}

int Wine::sum() const
{
    return data.second().sum();
}

void Wine::Show() const
{
    std::cout << "Wine: " << label << std::endl;
    std::cout << "Year  " << "  Bottles" << std::endl;
    for (int i = 0; i < years; ++i)
    {
        std::cout << data.second()[i] << "    ";
        std::cout << data.first()[i] << std::endl;
    }
}
