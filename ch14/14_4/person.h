#ifndef PERSON_H_
#define PERSON_H_
#include <string>

class Person
{
private:
    std::string firstname;
    std::string lastname;

protected:
    virtual void Data() const;

public:
    Person(const char * fn = "none", const char * ln = "none")
        : firstname(fn), lastname(ln) {}
    // no explicit copy constructor function
    virtual ~Person() {}
    virtual void Show() const; 
    virtual void Set();
};

#endif
