#include "stack.h"
#include <iostream>

int main()
{
    Stack s1;  // 默认构造函数
    Stack s2(20);

    s2.push(10);
    s2.push(30);
    s2.push(200);

    Stack s3 = s2;

    Item i;
    s3.pop(i);
    std::cout << i << " is deleted from s3" << std::endl; 

    s1 = s3;
    s1.pop(i);
    std::cout << i << " is deleted from s1" << std::endl;

    return 0;
}
