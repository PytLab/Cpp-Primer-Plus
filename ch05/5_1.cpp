#include <iostream>

int main(void)
{
    using namespace std;
    
    // get inputs
    cout << "Enter 2 integers: ";
    int input[2];
    for(int i = 0; i < 2; ++i)
        cin >> input[i];
        
    int a = input[0];
    int b = input[1];
    long sum = 0;
    
    // sum
    for(int i = a; i <= b; ++i)
        sum += i;

    cout << "Sum: " << sum << endl;
    
    return 0;
}