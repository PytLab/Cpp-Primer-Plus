#include <cstdlib>
#include <ctime>
#include "pokerplayer.h"

int PokerPlayer::Draw() const
{
    srand(time(0));
    return int(rand()) % 52;
}

