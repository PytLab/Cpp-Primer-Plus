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
    
    int sales[12];
    
    for(int i = 0; i < 12; ++i)
    {
        cout << "Enter sale for " << months[i] << ": ";
        cin >> sales[i];
    }
    
    int sum = 0;
    for(int i = 0; i < 12; ++i)
    {
        cout << months[i] << ": " << sales[i] << endl;
        sum += sales[i];
    }
    
    cout << "Sum: " << sum << endl;
    
    return 0;
}