#include <iostream>
#include <string>


int main(void)
{
    using namespace std;

    struct Patron{
        string name;
        double money;
    };

    cout << "Enter patron number: ";
    int np;
    cin >> np;

    Patron * pt = new Patron [np];

    for(int i = 0; i < np; ++i)
    {
        cout << "Enter patron name: ";
        cin >> (pt + i)->name;
        cout << "Enter money: ";
        cin >> (pt + i)->money;
    }

    // statistic
    for(int i = 0; i < np; ++i)
    {
        if((pt + i)->money > 10000)
            cout << (pt + i)->name << endl;
    }

    delete [] pt;

    return 0;
}
