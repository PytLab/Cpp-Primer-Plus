#include <iostream>

using namespace std;

typedef double (*pfunc)(double, double);

double add(double, double);
double mul(double, double);
double calculate(double, double, pfunc);

int main(void)
{
    double x, y;
    pfunc pfun_arr[2] = {add, mul};

    cout << "Enter 2 floats: ";
    while((cin >> x) >> y)
    {
        double res;
        for(int i = 0; i < 2; ++i)
        {
            res = calculate(x, y, pfun_arr[i]);
            cout << "result #" << i << ": " << res << endl;
        }
            cout << "Enter 2 floats again: " << endl;

    }
    return 0;
}

double add(double x, double y)
{
    return x + y;
}

double mul(double x, double y)
{
    return x*y;
}

double calculate(double x, double y, pfunc pf)
{
    return (*pf)(x, y);
}

