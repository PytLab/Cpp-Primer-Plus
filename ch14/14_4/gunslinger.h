#ifndef GUNSLINGER_H_
#define GUNSLINGER_H_
#include "person.h"

class Gunslinger : virtual public Person
{
private:
    double drawtime;
    int notches;

protected:
    void Data() const;

public:
    Gunslinger(const char * fn = "none", const char * ln = "none",
               double d = 0.0, int n = 0)
        : Person(fn, ln), drawtime(d), notches(n) {}
    double Draw() const { return drawtime; }
    double Notches() const { return notches; }
    void Show() const;
    void Set();
};

#endif
