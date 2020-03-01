#include <iostream>
#include <cstring>

using namespace std;

template <typename T> void show(T *, int);
template <>
void show<char *>(char **, int);

template <typename T> T maxn(T *, int);
template <>
char * maxn<char *>(char **, int);

int main(void)
{
    int arr_int[6] = {1, 2, 3, 4, 5, 6};
    double arr_flt[4] = {10.0, 11.0, 12.0, 13.0};
    char * arr_ch[4] = {
        "shao",
        "zhengjiang",
        "haha",
        "yesyesyesgood",
    };

    show(arr_int, 6);
    cout << "Max int: " << maxn(arr_int, 6) << endl;

    show(arr_flt, 4);
    cout << "Max double: " << maxn(arr_flt, 4) << endl;

    show(arr_ch, 4);
    char* max3=maxn(arr_ch, 4);
    cout << "Max string: " << &max3 << endl;

    return 0;
}

template <typename T>
T maxn(T * arr, int n)
{
    T max = arr[0];
    for(int i = 0; i < n; ++i)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    
    return max;
}

template <>
char * maxn<char *>(char ** arr, int n)
{
    int max_len = strlen(arr[0]);
    int tmp_len;
    int max_idx = 0;

    int i;
    for(i = 0; i < n; ++i)
    {
        tmp_len = strlen(arr[i]);
        if(tmp_len > max_len)
        {
            max_len = tmp_len;
            max_idx = i;
        }
    }

    return arr[max_idx];
}

// output array
template <typename T>
void show(T * arr, int n)
{
    for(int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

template <>
void show<char *>(char ** arr, int n)
{
    for(int i = 0; i < n; ++i)
        cout << arr[i] << endl;
}

