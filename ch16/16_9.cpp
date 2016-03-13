#include <algorithm>
#include <vector>
#include <list>
#include <ctime>
#include <random>
#include <iostream>

const int SIZE = 1000000;

int main()
{
    using std::vector;
    using std::list;
    using std::cout;
    using std::cin;
    using std::endl;

    // initialize a random vector
    vector<int> vi0(SIZE, 0);
    for (int i = 0; i < SIZE; ++i)
        vi0.at(i) = rand();

    // initialize list and vector
    vector<int> vi(vi0);
    list<int> li(SIZE, 0);
    std::copy(vi0.begin(), vi0.end(), li.begin());

    // sort vector
    clock_t start = std::clock();
    std::sort(vi.begin(), vi.end());
    clock_t end = clock();
    cout << "sort vector time: "
         << (double)(end - start)/CLOCKS_PER_SEC << endl;

    start = std::clock();
    //std::sort(li.begin(), li.end());
    li.sort();
    end = clock();
    cout << "sort list time: "
         << (double)(end - start)/CLOCKS_PER_SEC << endl;

    // operation d
    std::copy(vi0.begin(), vi0.end(), li.begin());
    start = std::clock();
    std::copy(li.begin(), li.end(), vi.begin());
    std::sort(vi.begin(), vi.end());
    std::copy(vi.begin(), vi.end(), li.begin());
    end = clock();
    cout << "copy+sort+copy time: "
         << (double)(end - start)/CLOCKS_PER_SEC << endl;
    
    return 0;
}
