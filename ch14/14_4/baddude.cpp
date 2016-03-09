#include "baddude.h"

void BadDude::Data() const
{
    Gunslinger::Data();
    PokerPlayer::Data();
}

void BadDude::Show() const
{
    Data();
}

void BadDude::Set()
{
    Gunslinger::Set();
}
