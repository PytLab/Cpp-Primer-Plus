	#include <iostream>

struct Car{
    std::string producer;
    int year;
};

int main(void)
{
    using namespace std;
    
    cout << "How many cars do you wish to catalog? ";
    int ncar;
	i
    (cin >> ncar).get();
    
    Car * cars = new Car [ncar];
    
    for(int i = 0; i < ncar; ++i)
    {
        cout << "Car #" << i+1 << ":" << endl;
        cout << "Please enter the make: ";
        getline(cin, cars[i].producer);
        cout << "Please enter the year made: ";
        cin >> cars[i].year;
        cin.get();
    }
    
    // output
    cout << "Here is your collection: " << endl;
    for(int i = 0; i < ncar; ++i)
        cout << cars[i].year << " " << cars[i].producer << endl;
    
    delete [] cars;
    
    return 0;
}
