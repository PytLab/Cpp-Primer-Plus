#include <iostream>
#include <string>

int main(void)
{
    using namespace std;
    
    string months[12] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November",
        "December"  
    };
    
    int sales[3][12];
    
    // inputs
    for(int y = 0; y < 3; ++y)
    {
        cout << "Year " << y << ": " << endl;
        for(int m = 0; m < 12; ++m)
        {
            cout << "Enter sale for " << months[m] << ": ";
            cin >> sales[y][m];
        }
    }
    
    // outputs
    int sum = 0;
    for(int y = 0; y < 3; ++y)
    {
        cout << "Year " << y << ": " << endl;
        for(int m = 0; m < 12; ++m)
        {
            cout << months[m] << ": " << sales[y][m] << endl;
            sum += sales[y][m];
        }
    }
    
    cout << "Sum: " << sum << endl;
    
    return 0;
}