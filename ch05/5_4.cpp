#include <iostream>

int main(void)
{
    using namespace std;
    
    double daphne = 100.0;
    double cleo = 100.0;
    int year;
    
    for(year = 1; cleo <= daphne; ++year)
    {
        daphne += 10.0;
        cleo *= 1.05;
    }
    
    cout << year-1 << " years later, " << endl;
    cout << "Daphne has $" << daphne << endl;
    cout << "Cleo has $" << cleo << endl;
    
    return 0;
}
