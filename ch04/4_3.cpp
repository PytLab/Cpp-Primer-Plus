#include <iostream>
#include <cstring>

const int Strlen = 20;

int main(void)
{
    using namespace std;
    
    char first_name[Strlen];
    char last_name[Strlen];
    char full_name[2*Strlen];
    
    cout << "Enter your first name: ";
    cin.get(first_name, Strlen);
    cin.get();
    cout << "Enter your last name: ";
    cin.get(last_name, Strlen);
    
    strcpy(full_name, last_name);
    strcat(full_name, ", ");
    strcat(full_name, first_name);
    
    cout << "Here's the information in a single string: ";
    cout << full_name << endl;
    
    return 0;
}