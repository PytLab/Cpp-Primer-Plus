#include <iostream>
#include <cstring>
#include "person.h"
#include "gunslinger.h"
#include "pokerplayer.h"
#include "baddude.h"

const int SIZE = 5;

int main()
{
    using namespace std;
    int ct, i;
    Person * gang[SIZE];

    for(ct = 0; ct < SIZE; ct++)
    {
        char choice;
        cout << "Enter the gang category: \n"
             << "o: ordinary person  g: gunslinger  "
             << "p: pokerplayer  b: bad dude  q: quit \n";
        cin >> choice;
        while(strchr("ogpbq", choice) == NULL)
        {
            cout << "Please enter an o, g, p, b, or q: ";
            cin >> choice;
        }

        if (choice == 'q')
            break;

        switch(choice)
        {
            case 'o': gang[ct] = new Person;
                      break;
            case 'g': gang[ct] = new Gunslinger;
                      break;
            case 'p': gang[ct] = new PokerPlayer;
                      break;
            case 'b': gang[ct] = new BadDude;
                      break;
        }

        cin.get();
        gang[ct]->Set();
    }

    cout << "\nHere is your gang: \n";
    for (i = 0; i < ct; i++)
    {
        cout << endl;
        gang[i]->Show();
    }
    for (i = 0; i < ct; i++)
        delete gang[i];
    cout << "Bye" << endl;

    return 0;
}
