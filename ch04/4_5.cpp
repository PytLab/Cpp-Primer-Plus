#include <iostream>
#include <string>

struct CandyBar{
    std::string brand;
    double weight;
    int calorie;      
};

int main(void)
{
    using namespace std;
    
    CandyBar snack = {
        "Mocha Munch",
        2.3,
        350
    };
    
    cout << "Brand: " << snack.brand << endl;
    cout << "Weight: " << snack.weight << endl;
    cout << "Calorie: " << snack.calorie << endl;
    
    return 0;
}