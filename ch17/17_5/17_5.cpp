#include <vector>
#include <fstream>
#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

int main()
{
    using namespace std;

    vector<string> mats;
    vector<string> pats;
    vector<string> all;

    ifstream fmat("mat.dat", ios_base::in), fpat("pat.dat", ios_base::in);
    if (!(fmat && fpat))
    {
        cerr << "Failed to open input files" << endl;
        exit(EXIT_FAILURE);
    }

    ofstream fout("matnpat", ios_base::out);
    if (!fout)
    {
        cerr << "Failed to open output files" << endl;
        exit(EXIT_FAILURE);
    }

    string name;

    while (fmat >> name)
        mats.push_back(name);
    cout << "Mat's friends: " << endl;
    for (auto it = mats.begin(); it != mats.end(); ++it)
        cout << *it << " ";
    cout << endl;

    while (fpat >> name)
        pats.push_back(name);
    cout << "Pat's friends: " << endl;
    for (auto it = pats.begin(); it != pats.end(); ++it)
        cout << *it << " ";
    cout << endl;

    // merge vectors
    all.reserve(mats.size() + pats.size());
    all.insert(all.end(), mats.begin(), mats.end());
    all.insert(all.end(), pats.begin(), pats.end());
    sort(all.begin(), all.end());
    auto past_end = unique(all.begin(), all.end());
    cout << "All friends:" << endl;
    for (auto it = all.begin(); it != past_end; ++it)
        cout << *it << " ";
    cout << endl;

    return 0;
}
