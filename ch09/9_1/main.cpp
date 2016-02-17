#include "golf.h"
const int N = 5;

int main(void)
{
    using std::cout;
    using std::cin;
    using std::endl;

    golf gs[N];
    int i;
    int result;

    for(i = 0; i < N; ++i)
    {
        cout << "golf[" << i << "]" << endl;
        result = setgolf(gs[i]);
        if(!result)
        {
            cout << "empty name detected!";
            break;
        }
    }

    // show all structure
    int nout = i;
    for(i = 0; i < nout; ++i)
    {
        cout << "golf[" << i << "]" << endl;
        showgolf(gs[i]); 
    }

    return 0;
}
