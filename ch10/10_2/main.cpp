#include "person.h"

int main(void)
{
    Person one;
    Person two("Symthecraft");
    Person three("Dimwiddy", "Sam");
    three.show();
    three.formal_show();

    return 0;
}
