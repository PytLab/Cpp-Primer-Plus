#include <iostream>
#include "dma.h"

int main()
{
    using std::cout;
    using std::endl;

    baseDMA shirt("Portrabelly", 8);
    lacksDMA balloon("red", "Blumpo", 4);
    hasDMA map("Mercator", "Buffalo Kyes", 5);
    cout << shirt << endl;
    cout << balloon << endl;
    cout << map << endl;
    lacksDMA balloon2(balloon);
    hasDMA map2;
    map2 = map;
    cout << balloon2 << endl;
    cout << map2 << endl;

    ABC * pts[3];
    pts[0] = &shirt;
    pts[1] = &balloon;
    pts[2] = &map;

    for (int i = 0; i < 3; ++i)
        cout << *pts[i] << endl;
    for (int i = 0; i < 3; ++i)
        pts[i]->View();

    return 0;
}
