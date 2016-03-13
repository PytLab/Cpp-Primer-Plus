#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

std::vector<int> lotto(int total, int select);

int main()
{
    const int TOT = 51, SELECT = 6;

    std::cout << "Play?<y/n>: ";
    std::string choice;
    std::vector<int> res;

    while(std::cin >> choice && choice != "n")
    {
        res = lotto(TOT, SELECT);
        for (auto it = res.begin(); it != res.end(); ++it)
            std::cout << *it << " ";
        std::cout << std::endl;

        std::cout << "Play again?<y/n>: ";
    }

    std::cout << "Bye~" << std::endl;

    return 0;
}

std::vector<int> lotto(int total, int select)
{
    using std::vector;
    // get a total vector
    vector<int> all;
    for (int i = 1; i <= total; ++i)
        all.push_back(i);
    // shuffle it
    random_shuffle(all.begin(), all.end());
    // random vector
    vector<int> rnd(all.begin(), all.begin() + select);

    return rnd;
}

