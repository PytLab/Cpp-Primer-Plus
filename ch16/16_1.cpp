#include <iostream>
#include <string>

bool boot(const std::string & s);

int main()
{
    using std::string;
    using std::cout;
    using std::cin;
    using std::endl;

    string input;
    cout << "Enter a word(q to quit): ";

    while(std::getline(cin, input) && input != "q")
    {
        if (boot(input))
            cout << input << " is palindrome!" << endl;
        else
            cout << input << "is not palindrome" << endl;
        cout << "Enter anthor word(q to quit): ";
    }

    cout << "Bye!" << endl;

    return 0;
}

bool boot(const std::string & s)
{
    using std::string;
    string rev(s.rbegin(), s.rend());
    
    return (rev == s);
}
