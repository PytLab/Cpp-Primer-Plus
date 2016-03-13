#include <iostream>
#include <string>
#include <cctype>

bool boot(const std::string & s);
const std::string reduce(const std::string & s);

int main()
{
    using std::string;
    using std::cout;
    using std::cin;
    using std::endl;

    string input;
    string red;

    cout << "Eneter a word: ";
    while (std::getline(cin, input) && input != "q")
    {
        // reduce it
        red = reduce(input);
        cout << "After reduce: " << red << endl;
        // check it
        if (boot(red))
            cout << input << " is palindrome!" << endl;
        else
            cout << input << " is not palindrome!" << endl;
        cout << "Enter anthoer word(q to quit): ";
    }
    cout << "Bye!" << endl;

    return 0;
}

bool boot(const std::string & s)
{
    std::string rev(s.rbegin(), s.rend());
    return (rev == s);
}

const std::string reduce(const std::string & s)
{
    std::string red;

    for (auto iter = s.begin(); iter != s.end(); iter++)
    {
        char ch = *iter;
        if (isalpha(ch))
        {
            if (isupper(ch))
                ch = tolower(ch);
            red.push_back(ch);        
        }
    }

    return red;
}
