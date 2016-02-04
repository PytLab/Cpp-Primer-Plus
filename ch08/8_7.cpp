#include <iostream>

struct debts{
    char name[50];
    double amount;
};

template <class T>
T SumArray(T * arr, int n);

template <typename T>
T SumArray(T ** pd, int n);

int main(void)
{
    using namespace std;

    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] = {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0},
    };
    double * pd[3];

    for (int i = 0; i < 3; ++i)
        pd[i] = &mr_E[i].amount;

    cout << "amount of things: " << SumArray(things, 6) << endl;
    cout << "amount of debt: " << SumArray(pd, 3) << endl;

    return 0;
}

template <class T>
T SumArray(T * arr, int n)
{
    T total = 0; 
    for(int i = 0; i < n; ++i)
        total += arr[i];

    return total;
}

template <typename T>
T SumArray(T ** pd, int n)
{
    T sum = (T)0;

    for(int i = 0; i < n; ++i)
        sum += *pd[i];

    return sum;
}
