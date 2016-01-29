#include <iostream>

long fact(int);

int main(void)
{
    using namespace std;

    long res;
    int n;

    cout << "Enter number: ";
    while(cin >> n)
    {
        res = fact(n);
        cout << n << "! = " << res << endl;
        cout << "Enter number: ";
    }

    return 0;
}

long fact(int n)
{
    if(n == 0)
        return 1;

    return n*fact(n-1);
}
