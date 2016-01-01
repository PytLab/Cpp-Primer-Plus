#include <iostream>

int main(void)
{
    using std::cin; 
    using std::cout;
    using std::endl;
    
    long long world_pop;
    cout << "Enter the world's population: ";
    cin >> world_pop;
    
    long long us_pop;
    cout << "Enter the population of the us: ";
    cin >> us_pop;
    
    cout << "The population of the US is ";
    cout << double(us_pop)/double(world_pop);
    cout << " of the world population." << endl;
    
    return 0;
}