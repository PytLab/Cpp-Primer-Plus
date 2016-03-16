#include <fstream>
#include <iostream>
#include <string>

// functor Store
class Store
{
private:
    std::ostream & os;
public:
    Store(std::ostream & o) : os(o) {}
    // overloaded funtions
    void operator()(const std::string & s);
};

void Store::operator()(const std::string & s)
{
    std::size_t len = s.length();

    // store string length
    os.write((char *)&len, sizeof(std::size_t));

    // store string data
    os.write(s.data(), len);
}
