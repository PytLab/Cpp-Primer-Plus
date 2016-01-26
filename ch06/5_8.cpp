#include <fstream>
#include <iostream>

int main(void)
{
    using namespace std;

    ifstream infile;
    infile.open("patron.txt");

    char ch;
    int count = 0;
    while(infile >> ch)
        count++;

    infile.close();

    // output
    cout << "There are " << count << " characters." << endl;

    return 0;
}
