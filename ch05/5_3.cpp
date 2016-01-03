#include <iostream>

int main(void)
{
    using namespace std;
    
    cout << "Enter an integer(0 to stop): ";
    int n, sum = 0;
    cin >> n;
    while(n != 0)
    {
        sum += n;
        cout << "Sum: " << sum << endl;
        cout << "Enter an integer(0 to stop): ";
        cin >> n;
    }
    
    cout << "Bye";
    
    return 0;
}