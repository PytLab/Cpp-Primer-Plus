#include <fstream>
#include <iostream>
#include <cstdlib>

int main()
{
    using std::cout;
    using std::cin;
    using std::endl;
    using std::ofstream;

    cout << "Enter filename: ";
    char fname[20];
    cin >> fname;
    ofstream fout;
    fout.open(fname, std::ios_base::out);

    cout << "Enter something: " << endl;
    char ch;
    while (cin.get(ch))
        fout.put(ch);
    if (cin.eof())
        cout << "\n It is EOF" << endl;
    else
    {
        std::cerr << "Unkonwn error" << endl;
        exit(EXIT_FAILURE);
    }
    fout.close();

    return 0;
}
