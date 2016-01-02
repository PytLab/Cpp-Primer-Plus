#include <iostream>

const int Strlen = 20;

int main(void)
{
    using namespace std;
    
    char first_name[Strlen], last_name[Strlen];
    char grade;
    int age;
    
    cout << "What is your first name? ";
    cin.get(first_name, Strlen);
    cin.get();  // omit line seperator
    cout << "What is your last name? ";
    cin.get(last_name, Strlen);
    cout << "What letter grade do you deserve? ";
    cin >> grade;
    cout << "What is your age? ";
    cin >> age;
    
    cout << "Name: " << last_name << ", " << first_name << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age << endl;
    
    return 0;
}