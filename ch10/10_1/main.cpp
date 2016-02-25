#include "account.h"

int main(void)
{
    Account a = Account("shaozhengjiang", "19920221", 0);

    a.show();
    a.store(100);
    a.show();
    a.draw(10);
    a.show();

    return 0;
}
