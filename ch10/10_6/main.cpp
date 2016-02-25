#include "move.h"

int main(void)
{
    Move m1;
    m1.showmove();
    m1.reset(2, 3);
    m1.showmove();
    Move m2 = Move(3, 1);
    m2.showmove();
    Move m3;
    m3 = m2.add(m1);
    m3.showmove();

    return 0;
}
