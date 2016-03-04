#include <iostream>
#include "cow.h"

int main()
{
    Cow c1;

    Cow c2 = Cow("shao", "coding", 120);
    c2.show();

    Cow c3 = c2;  // 复制构造函数
    c3.show();

    c1 = c3;  // 重载赋值运算符
    c1.show();

    return 0;
}
