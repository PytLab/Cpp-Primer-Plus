#include <iostream>
#include <fstream>
#include <cstdlib>

const int Size = 81;

int main(void)
{
    using namespace std;

    struct Patron{
        char name[Size];
        double money;
    };

    ifstream infile;
    infile.open("patron.txt");

    if(!infile.is_open())
    {
        cout << "Could not open file." << endl;
        cout << "program terminating." << endl;
        exit(EXIT_FAILURE);
    }

    // total number
    int ntot;
    infile >> ntot;
    cout << ntot << endl;
    infile.get();

    // allocate memery
    Patron * pt = new Patron [ntot];

    // read in data
    for(int i = 0; i < ntot; ++i)
    {
        infile.getline((pt+i)->name, Size);
        infile >> (pt+i)->money;
        infile.get();
    }

    // statistic
    for(int i = 0; i < ntot; ++i)
    {
        if((pt + i)->money > 10000)
            cout << (pt + i)->name << endl;
    }

    infile.close();

    delete [] pt;

    return 0;
}
