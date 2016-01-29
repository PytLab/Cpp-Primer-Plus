#include <iostream>

double get_avg(double, double);

int main(void)
{
    using namespace std;

    double x, y;
    double avg;

    // read in
    cout << "Enter 2 floats: ";
    (cin >> x) >> y;
    while(x && y)
    {
        avg = get_avg(x, y);
        cout << "averages of " << x << ", " << y << " = " << avg << endl;
        cout << "Enter again: ";
        (cin >> x) >> y;
    }

    return 0;
}

double get_avg(double x, double y)
{
    return 2.0*x*y/(x + y);
}

