#include <iostream>

using namespace std;

const int Slen = 30;
struct student {
    char fullname[Slen];
    char hobby[Slen];
    int ooplevel;
};

// prototype
int getinfo(student *, int);
void display1(student);
void display2(const student *);
void display3(const student *, int);

int main(void)
{
    cout << "Enter class size: ";
    int class_size;
    cin >> class_size;

    while(cin.get() != '\n')
        continue;

    student * ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    
    for(int i = 0; i < entered; ++i)
    {
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);

    delete [] ptr_stu;
    cout << "Done" << endl;

    return 0;
}

int getinfo(student * pstu, int n)
{
    student * pt;

    int i;
    for(i = 0; i < n; ++i)
    {
        pt = pstu + i;
        cout << "Enter info student #" << i << ":" << endl;
        cout << "fullname: ";
        // detect blank line
        cin.getline(pt->fullname, Slen);
        if(!pt->fullname)
            break;
        cout << "hobby: ";
        cin.getline(pt->hobby, Slen);
        cout << "ooplevel: ";
        cin >> pt->ooplevel;
        cin.get();
    }

    return i;
}

void display1(student stu)
{
    cout << "name: " << stu.fullname << endl;
    cout << "hobby: " << stu.hobby << endl;
    cout << "ooplevel: " << stu.ooplevel << endl;
}

void display2(const student * pstu)
{
    cout << "name: " << pstu->fullname << endl;
    cout << "hobby: " << pstu->hobby << endl;
    cout << "ooplevel: " << pstu->ooplevel << endl;
}

void display3(const student pa[], int n)
{
    student * pt;
    for(int i = 0; i < n; ++i)
    {
//        pt = pa + i;
        cout << "info #" << i << endl;
        cout << "name: " << (pa + i)->fullname << endl;
        cout << "hobby: " << (pa + i)->hobby << endl;
        cout << "ooplevel: " << (pa + i)->ooplevel << endl;
    }
}
