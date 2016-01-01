#include <iostream>

const int Sec_per_min = 60;
const int Min_per_hour = 60;
const int Hour_per_day = 24;

int main(void)
{
    std::cout << "Enter the number of seconds: ";
    long long total_sec;
    std::cin >> total_sec;
    
    // get seconds
    int sec = total_sec % Sec_per_min;
    int total_min = total_sec/Sec_per_min;
    
    // get minutes
    int min = total_min % Min_per_hour;
    int total_hour = total_min/Min_per_hour;
    
    // get hours and days
    int hour = total_hour % Hour_per_day;
    int day = total_hour/Hour_per_day;
    
    // output
    std::cout << total_sec << " seconds = ";
    std::cout << day << "days, ";
    std::cout << hour << " hours, ";
    std::cout << min << " minutes, ";
    std::cout << sec << " seconds" << std::endl;

    return 0;
}