#include <iostream>

struct Box{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

using namespace std;

void a(Box);
void b(Box *);

int main(void)
{
    Box x = {"shaozhengjiang", 2.0, 3.0, 3.5, 0.0};

    // output
    a(x);

    // modify volume
    b(&x);

    // output again
    a(x);

    return 0;
}

void a(Box box)
{
    cout << "maker " << box.maker << endl;
    cout << "height " << box.height << endl;
    cout << "width " << box.width << endl;
    cout << "length " << box.length << endl;
    cout << "volume " << box.volume << endl;
}

void b(Box * pbox)
{
    pbox->volume = pbox->height * pbox->length * pbox->width;
}

