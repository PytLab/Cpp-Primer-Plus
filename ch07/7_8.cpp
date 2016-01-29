#include <iostream>
#include <string>

// constant data
const int Seasons = 4;
const char * Snames[Seasons] = {"Spring", "Summer", "Fall", "Winter"};

using namespace std;

static void fill(double *);
static void show(double *);

int main(void)
{
    double expenses[Seasons];
    fill(expenses);
    show(expenses);

    return 0;
}

static void fill(double * expenses)
{
    for(int i = 0; i < Seasons; ++i)
    {
        cout << "Enter " << Snames[i] << " expense: ";
        cin >> expenses[i];
    }
}

static void show(double * expenses)
{
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for(int i = 0; i < Seasons; ++i)
    {
        cout << Snames[i] << ": $" << expenses[i] << endl;
        total += expenses[i];
    }
    cout << "Total Expenses: $" << total << endl;
}
