#include <iostream>
#include <string>

int main(void)
{
    using namespace std;
 
    struct Pizza{
        string company;
        double diameter;
        double weight;
    };
    
    Pizza * p = new Pizza;
    
    cout << "Enter company name: ";
    getline(cin, p->company);
    cout << "Enter diameter of pizza: ";
    cin >> p->diameter;
    cout << "Enter weight of pizza: ";
    cin >> p->weight;
    
    cout << "Company: " << p->company << endl;
    cout << "Diameter: " << p->diameter << endl;
    cout << "Weight:" << p->weight << endl;
    
    return 0;
}