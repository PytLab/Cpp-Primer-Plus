#include <iostream>
const int Max = 5;
// function prototype
double * fill_array(double *, int);
void show_array(double *, double *);
void revalue(double, double *, double *);

using namespace std;

int main(void)
{
    double properties[Max];

    // fill array
    double * end = fill_array(properties, Max);
    // output array
    show_array(properties, end);

    if(end > properties)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while(!(cin >> factor))
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, end);
        show_array(properties, end);
    }

    cout << "Done.\n" << endl;
    return 0;
}

double * fill_array(double * start, int n)
{
    double temp;
    int i;
    for(i = 0; i < n; ++i)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin)
        {
            cin.clear();
            while(cin.get() != '\n')
                continue;
            cout << "Bad imput; input process terminated.\n";
            break;
        }
        else if(temp < 0)
            break;
        else
            start[i] = temp;
    }

    return start + i - 1;
}

void show_array(double * start, double * end)
{
    double * pt;

    for(pt = start; pt <= end; ++pt)
    {
        cout << "Property #" << (pt - start + 1) << ": $";
        cout << *pt << endl;
    }
}

void revalue(double r, double * start, double * end)
{
    double * pt;
    for(pt = start; pt <= end; ++pt)
        *pt *= r;
}

