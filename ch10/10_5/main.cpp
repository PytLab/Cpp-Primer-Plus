#include <iostream>
#include <cctype>
#include "stack.h"

int main(void)
{
    using namespace std;
    Stack st;
    char ch;
    Item item;
    double total = 0.0;

    cout << "Please enter A to add an customer" << endl;
    cout << "p to pop a customer, Q to quit." << endl;

    while(cin >> ch && toupper(ch) != 'Q')
    {
        while(cin.get() != '\n')
            continue;

        if(!isalpha(ch))
        {
            cout << '\a';
            continue;
        }

        switch(ch)
        {
            case 'a':
            case 'A':
                cout << "Enter customer name: ";
                cin.getline(item.fullname, 35);
                cout << "Enter payment: ";
                cin >> item.payment;
                if(st.isfull())
                    cout << "stack is full" << endl;
                else
                    st.push(item);
                break;
            case 'p':
            case 'P':
                if(st.isempty())
                    cout << "stack is empty" << endl;
                else
                {
                    st.pop(item);
                    total += item.payment;
                    cout << "total = " << total << endl;
                }
                break;
        }

        cout << "Please enter A to add an customer" << endl;
        cout << "p to pop a customer, Q to quit." << endl;
    }

    cout << "Bye!" << endl;

    return 0;
}
