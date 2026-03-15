#include <iostream>
#include "Hero.h"
#include "Warrior.h"
#include "Knight.h"
#include "SpellBlade.h"
#include "Guild.h"

using namespace std;

int main()
{
    Guild g1("Fellowship");

    Hero h1("Aragorn",100,80);
    Warrior w1("Boromir",120,75,40);
    Knight k1("Arthur",110,70,50,30);
    SpellBlade sb1("Elrond",95,65,35,100,60);

    int choice;

    do
    {
        cout << "\n===== Guild Menu =====\n";
        cout << "1. Add Hero\n";
        cout << "2. Add Warrior\n";
        cout << "3. Add Knight\n";
        cout << "4. Add SpellBlade\n";
        cout << "5. Display Guild Members\n";
        cout << "6. Display Guild Stats\n";
        cout << "7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                g1 += &h1;
                cout << "Hero added to guild\n";
                break;

            case 2:
                g1 += &w1;
                cout << "Warrior added to guild\n";
                break;

            case 3:
                g1 += &k1;
                cout << "Knight added to guild\n";
                break;

            case 4:
                g1 += &sb1;
                cout << "SpellBlade added to guild\n";
                break;

            case 5:
                cout << g1;
                break;

            case 6:
                g1.displayGuildStats();
                break;

            case 7:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while(choice != 7);

    return 0;
}
