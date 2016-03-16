#include <iostream>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    cout << "Enter a sentence with a '$' in it: " << endl;
    int ct = 0;
    char ch;
    while ((ch = cin.get()) != '$')
        ct++;
    // put $ back to stream
    cin.putback(ch);

    while (cin.get() != '\n')
        continue;

    cout << "There are " << ct << " characters before $" << endl;

    return 0;
}
