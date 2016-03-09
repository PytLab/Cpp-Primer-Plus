#ifndef POKERPLAYER_H_
#define POKERPLAYER_H_
#include "person.h"

class PokerPlayer : virtual public Person
{
public:
    PokerPlayer(const char * fn = "none", const char * ln = "none")
        : Person(fn, ln) {}
    int Draw() const;
};

#endif
