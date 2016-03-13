#include <iostream>
#include <algorithm>

int reduce(long ar[], int n);
void show(long ar[], int n);

int main()
{
    long arr[10] = {12, 12, 5, 6, 11, 5, 6, 77, 11, 12};
    show(arr, 10);
    int newsize = reduce(arr, 10);
    show(arr, newsize);

    return 0;
}

int reduce(long ar[], int n)
{
    std::sort(ar, ar + n);
    auto past_end = std::unique(ar, ar + n);

    return past_end - ar;
}

void show(long ar[], int n)
{
    for (int i = 0; i < n; i++)
        std::cout << ar[i] << " ";
    std::cout << std::endl;
}
