#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include "store.h"

inline void ShowStr(const std::string & s);
void GetStrs(std::ifstream & fin, std::vector<std::string> & vistr);

int main()
{
    using namespace std;
    vector<string> vostr;
    string temp;

    // acquire strings
    cout << "Enter strings (empty line to quit):\n";
    while (getline(cin, temp) && temp[0] != '\0')
        vostr.push_back(temp);
    cout << "Here is your input" << endl;
    for_each(vostr.begin(), vostr.end(), ShowStr);

    // store in a file
    ofstream fout("strings.dat", ios_base::out | ios_base::binary);
    for_each(vostr.begin(), vostr.end(), Store(fout));
    fout.close();

    // recover file contents
    vector<string> vistr;
    ifstream fin("strings.dat", ios_base::in | ios_base::binary);
    if (!fin.is_open())
    {
        cerr << "Could not open file for input." << endl;
        exit(EXIT_FAILURE);
    }
    GetStrs(fin, vistr);
    cout << "\nHere are the strings read from the file:\n";
    for_each(vistr.begin(), vistr.end(), ShowStr);

    return 0;
}

inline void ShowStr(const std::string & s)
{
    std::cout << s << std::endl;
}

void GetStrs(std::ifstream & fin, std::vector<std::string> & vistr)
{
    std::size_t len;  // string length
    while (fin.read((char *)&len, sizeof(std::size_t)))
    {
        std::string str;
        char ch;
        for (int i = 0; i < len; ++i)
        {
            fin.read(&ch, sizeof(char));
            str.push_back(ch);
        }

        // put string to vector
        vistr.push_back(str);
    }
}
