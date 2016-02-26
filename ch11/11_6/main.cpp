#include "stonewt.h"
#include <iostream>

int main()
{
    Stonewt arr[6] = {50, 100, 150};

    for(int i = 3; i < 6; ++i)
    {
        std::cout << "Stonewt[" << i << "]: ";
        double pds;
        std::cin >> pds;
        Stonewt st = Stonewt(pds);
        arr[i] = st;
    }

    Stonewt max = arr[0], min = arr[0];
    int num = 0;
    Stonewt eleven = Stonewt(11, 0.0);
    for(int i = 0; i < 6; ++i)
    {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
        if(arr[i] > eleven)
            num++;
    }

    std::cout << "max: " << std::endl;
    max.show_lbs();
    std::cout << "min: " << std::endl;
    min.show_lbs();
    std::cout << num << "elements > 11 stones" << std::endl;

    return 0;
}
