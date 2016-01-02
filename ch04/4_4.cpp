#include <iostream>
#include <string>

int main(void)
{
    using namespace std;
    
    string first_name, last_name, full_name;
    
    cout << "Enter your first name: ";
    getline(cin, first_name);
    cout << "Enter your last name: ";
    getline(cin, last_name);
    
    full_name = last_name + ", " + first_name;
    
    cout << "Here's the information in a single string: ";
    cout << full_name << endl;
    
    return 0;
}