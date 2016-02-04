#include <iostream>

const int Len = 5;

template <typename T>
T max5(T *);

int main(void)
{
    using namespace std;

    int arr_int[Len] = {1, 2, 3, 4 ,5};
    double arr_flt[Len] = {1.0, 2.0, 3.0, 4.0, 5.0};

    cout << "Max int = " << max5(arr_int) << endl;
    cout << "Max double = " << max5(arr_flt) << endl;

    return 0;
}

template <typename T>
T max5(T * arr)
{
    T max = arr[0];
    for(int i = 0; i < Len; ++i)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    return max;
}

