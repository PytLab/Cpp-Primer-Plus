#include <iostream>
#include <cctype>

int main(void)
{
    using namespace std;

    cout << "Enter characters (type @ to stop): ";

    char ch;
    cin.get(ch);
    while(ch != '@')
    {
        // convert to lowercase
        if(isupper(ch))
            ch = tolower(ch);
        else if(islower(ch))
            ch = toupper(ch);
        // output
        if(!isdigit(ch))
            cout << ch;
        cin.get(ch);
    }
    cout << endl;

    return 0;
}
