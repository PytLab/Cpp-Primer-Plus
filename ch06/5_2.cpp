#include <iostream>
#include <array>

const int Size = 10;

int main(void)
{
    using namespace std;

    array<double, Size> donations;

    // data input
    cout << "Enter donation(non-number to stop): ";
    double donation;
    int i, n;
    for(i = 0; (i < Size) && (cin >> donation); ++i)
        donations[i] = donation;
    n = i + 1;


    // get average
    double sum;
    for(i = 0, sum = 0.0; i < n; ++i)
        sum += donations[i];
    double avg;
    avg = sum/(float)n;
    cout.precision(2);
    cout << "Average = " << avg << endl;

    // get number which is larger than average
    cout << "Number larger than average:" << endl;
    for(i = 0; i < n; ++i)
    {
        if(donations[i] > avg)
            cout << donations[i] << " ";
    }

    cout << endl;

    return 0;
}

