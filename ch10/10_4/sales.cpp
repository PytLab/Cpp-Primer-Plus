#include <iostream>
#include "sales.h"

namespace SALES
{
    Sales::Sales(const double ar[], int n)
    {
        for(int i = 0; i < QUARTERS; ++i)
        {
            if(i <= n)
                sales[i] = ar[i];
            else
                sales[i] = 0.0;
        }
        
        // get average, max, min
        double sum = 0.0;
        double max_temp = sales[0], min_temp = sales[0];
        for(int i = 0; i < QUARTERS; ++i)
        {
            double cur = sales[i];
            if(cur > max_temp)
                max_temp = cur;
            if(cur < min_temp)
                min_temp = cur;
            sum += cur;
        }
        average = sum/(float)QUARTERS;
        max = max_temp;
        min = min_temp;
    }

    Sales::Sales()
    {
        for(int i = 0; i < QUARTERS; ++i)
            sales[i] = 0.0;
        average = 0.0;
        max = 0.0;
        min = 0.0;
    }

    void Sales::setSales()
    {
        using std::cin;
        using std::cout;
        using std::endl;

        cout << "Enter sales:" << endl;
        for(int i = 0; i < QUARTERS; ++i)
        {
            cout << "sales[" << i << "]: ";
            cin >> sales[i];
        }

        // get average, max, min
        double sum = 0.0;
        double max_temp = sales[0], min_temp = sales[0];
        for(int i = 0; i < QUARTERS; ++i)
        {
            double cur = sales[i];
            if(cur > max_temp)
                max_temp = cur;
            if(cur < min_temp)
                min_temp = cur;
            sum += cur;
        }
        average = sum/(float)QUARTERS;
        max = max_temp;
        min = min_temp;
    }

    void Sales::showSales()
    {
        using std::cout;
        using std::endl;

        // show sales
        cout << "sales: ";
        for(int i = 0; i < QUARTERS; ++i)
            cout << sales[i] << " ";        
        cout << endl;

        // show average
        cout << "average: " << average << endl;

        // show max and min
        cout << "max: " << max << endl;
        cout << "min: " << min << endl;
    }
}
