#include <iostream>
#include <fstream>
#include "emp.h"

using namespace std;

inline void show_line(int n);
void show_menu();
inline void eatline();

const int MAX = 10;

int main()
{
    abstr_emp * pc[MAX];
    int ct = 0;  // number counter

    // check file existance
    // possible variables
    string fname, lname, job, reportsto;
    int inchargeof;

    ifstream fin("out.txt", ios_base::in);
    if (fin.good())
    {   // read from file
        int kind;
        while (fin >> kind)
        {
            switch(kind)
            {
                case Employee:
                    fin >> fname;
                    fin >> lname;
                    fin >> job;
                    pc[ct] = new employee(fname, lname, job);
                    break;
                case Manager:
                    fin >> fname;
                    fin >> lname;
                    fin >> job;
                    fin >> inchargeof;
                    pc[ct] = new manager(fname, lname, job, inchargeof);
                    break;
                case Fink:
                    fin >> fname;
                    fin >> lname;
                    fin >> job;
                    fin >> reportsto;
                    pc[ct] = new fink(fname, lname, job, reportsto);
                    break;
                case HighFink:
                    fin >> fname;
                    fin >> lname;
                    fin >> job;
                    fin >> reportsto;
                    fin >> inchargeof;
                    pc[ct] = new highfink(fname, lname, job, reportsto, inchargeof);
            }
            ct++;
        }

        // show content in file
        cout << "content in out.txt" << endl;
        for (int i = 0; i < ct; ++i)
            pc[i]->ShowAll();
    }

    // fill the array
    show_menu();
    char choice;
    abstr_emp * p;
    while (cin >> choice && choice != 'q' && ct < MAX)
    {
        eatline();
        switch (choice)
        {
            case 'a':  // employee
                p = new employee;
                p->SetAll();
                pc[ct] = p;
                break;
            case 'b':  // manager
                p = new manager;
                p->SetAll();
                pc[ct] = p;
                break;
            case 'c':  // fink
                p = new fink;
                p->SetAll();
                pc[ct] = p;
                break;
            case 'd':  // highfink
                p = new highfink;
                p->SetAll();
                pc[ct] = p;
                break;
        }
        ct++;
        show_menu();
    }

    // show all input
    for (int i = 0; i < ct; ++i)
        pc[i]->ShowAll();
    
    // write to files
    ofstream fout("out.txt", ios_base::out);
    for (int i = 0; i < ct; ++i)
    {
        pc[i]->WriteAll(fout);
        fout << endl;
    }
    fout.close();
    
    cout << "content in array are written to out.txt" << endl;

    // free memories
    for (int i = 0; i < ct; ++i)
        delete pc[i];

    return 0;
}

void show_menu()
{
    ios_base::fmtflags old_fmt = cout.setf(ios_base::left, ios_base::adjustfield);

     show_line(35);
    cout.width(20);
    cout << "a. employee";
    cout << "b. manager" << endl;
    cout.width(20);
    cout << "c. fink";
    cout << "d. highfink" << endl;
    cout << "q. quit" << endl;
    show_line(35);
    cout << "Select a type: " << endl;

    cout.setf(old_fmt);
}

inline void show_line(int n)
{

    cout.fill('-');
    cout.width(n);
    cout << "-" << endl;
    cout.fill(' ');
}

inline void eatline()
{
    while(cin.get() != '\n')
        continue;
}
