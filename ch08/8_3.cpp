#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void to_upper(string &);

int main(void)
{
    string str;

    cout << "Enter a string (q to quit): ";
    getline(cin, str);
    while(str != "q")
    {
        to_upper(str);
        cout << str << endl;

        cout << "Next string (q to quit): ";
        getline(cin, str);
    }

    cout << "Bye" << endl;

    return 0;
}

void to_upper(string & str)
{
    for(int i = 0; i < str.size(); ++i)
    {
        if(isalpha(str[i]))
            str[i] = toupper(str[i]);
    }
}
