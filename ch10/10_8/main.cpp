#include <iostream>
#include "list.h"

void addage(Item & item);

int main()
{
    List l;
    Item i = {"shaozhengjiang", 24};
    l.additem(i);
    int n;
    n = l.itemcount();
    std::cout << n << " items in list" << std::endl;
    l.visit(addage);

    return 0;
}

void addage(Item & item)
{
    item.age += 1;
}
