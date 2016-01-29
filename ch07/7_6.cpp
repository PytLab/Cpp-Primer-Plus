#include <iostream>

using namespace std;

const int Len = 10;

void Fill_array(double *, int);
void Show_array(const double *, int);
void Reverse_array(double *, int);

int main(void)
{
    double a[Len] = {0.0};

    // fill the array
    Fill_array(a, Len);

    // show elements
    Show_array(a, Len);

    // reverse array
    Reverse_array(a, Len);

    // show again
    Show_array(a, Len);

    return 0;
}

void Fill_array(double * arr, int n)
{
    int i;
    double elem;

    // reset array
    for(i = 0; i < n; ++i)
        arr[i] = 0.0;

    // fill array
    for(i = 0; i < n; ++i)
    {
        cout << "Enter arr[" << i << "]: ";
        if(cin >> elem)
            arr[i] = elem;
        else
            break;
    }
}

void Show_array(const double * arr, int n)
{
    for(int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

void Reverse_array(double * arr, int n)
{
    int i;
    int mid = n/2;
    double temp;

    for(i = 0; i < mid; ++i)
    {
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
}

