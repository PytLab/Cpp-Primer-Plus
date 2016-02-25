#include "golf.h"

int main(void)
{
    Golf g1 = Golf("zjshao", 5);
    g1.showgolf();
    Golf g2;
    g2.showgolf();
    g2.setgolf(g1);
    g2.showgolf();

    return 0;
}
