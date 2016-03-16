#include <fstream>
#include <iostream>
#include <cstdlib>
#include <string>

int main()
{
    using namespace std;

    ifstream fin1("in1.txt", ios_base::in);
    ifstream fin2("in2.txt", ios_base::in);
    if (!(fin1 && fin2))
    {
        cerr << "Failed to open in1.txt or in2.txt" << endl;
        exit(EXIT_FAILURE);
    }

    ofstream fout("out.txt", ios_base::out);
    if (!fout)
    {
        cerr << "Failed to open out.txt" << endl;
        exit(EXIT_FAILURE);
    }

    // merge
    string word;
    while (fin1 >> word)
        fout << word << " ";

    while (fin2 >> word)
        fout << word << " ";

    cout << "Copied content in in1.txt and in2.txt to out.txt" << endl;

    fin1.close();
    fin2.close();
    fout.close();

    return 0;
}
