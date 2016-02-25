#include "move.h"
#include <iostream>

Move::Move(double a, double b)
{
    x = a;
    y = b;
}

void Move::showmove() const
{
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}

Move Move::add(const Move & m) const
{
    Move n = Move(x + m.x, y + m.y);

    return n;
}

void Move::reset(double a, double b)
{
    x = a;
    y = b;
}
