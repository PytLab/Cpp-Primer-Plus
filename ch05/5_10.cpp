#include <iostream>

int main(void)
{
    using namespace std;
    
    cout << "Enter number of rows: ";
    int nrow;
    cin >> nrow;
    
    for(int i = 0; i < nrow; ++i)
    {
        for(int j = 0; j < nrow; ++j)
        {
            if(nrow - j > i + 1)
                cout << ".";
            else
                cout << "*";
        }
        cout << endl;
    }
    
    return 0;
}