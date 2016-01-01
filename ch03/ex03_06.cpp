#include <iostream>

int main(void)
{
    using namespace std;
    
    cout << "Enter the distance(miles):";
    double dis;
    cin >> dis;
    
    cout << "Enter volume of gasoline(gallon):";
    double vol;
    cin >> vol;
    
    cout << "You can run " << dis/vol << " miles per gallon" << endl;

    return 0;
}