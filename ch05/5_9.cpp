#include <iostream>

int main(void)
{
    using namespace std;
    
    string word;
    
    cout << "Enter words (to stop, type the word done):" << endl;
    
    int sum = 0;
    cin >> word;
    while(word != "done")
    {
        sum++;
        cin >> word;
    }
        
    cout << "You entered a total of " << sum << " words." << endl;
    
    return 0;
}