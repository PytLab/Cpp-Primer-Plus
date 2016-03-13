#include <algorithm>
#include <iostream>

template<typename T>
int reduce(T ar[], int n)
{
    std::sort(ar, ar + n);
    auto past_end = std::unique(ar, ar + n);

    return past_end - ar;
}

template<class T>
void show(T ar[], int n)
{
    for (int i = 0; i < n; i++)
        std::cout << ar[i] << " ";
    std::cout << std::endl;
}

int main()
{
    std::cout << "long test\n";
    long arr[10] = {12, 12, 5, 6, 11, 5, 6, 77, 11, 12};
    show(arr, 10);
    int newsize = reduce(arr, 10);
    show(arr, newsize);

    std::cout << "string test\n";
    std::string str_arr[5] = {
        "shao", "shao", "zhengjiang", "zheng", "shao"
    };
    show(str_arr, 5);
    newsize = reduce(str_arr, 5);
    show(str_arr, newsize);

    return 0;
}
