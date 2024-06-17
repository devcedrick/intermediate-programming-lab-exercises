#include <iostream>
#include "rpgChar.h"
#include "archer.h"
#include "barbarian.h"
#include "knight.h"

using namespace std;

void BattleArena(RPGCharacter &p1, RPGCharacter &p2);

int main()
{
    Knight p1;
    p1.setHP(250);
    Barbarian p2;
    p2.setHP(200);

    BattleArena(p1,p2);
}

void BattleArena(RPGCharacter &p1, RPGCharacter &p2)
{
    cout << "P1" << "\t" << "P2" << endl;
    cout << p1.getCharType() << "\t" << p2.getCharType() << endl;
    cout << p1.getHP() << "\t" << p2.getHP() << endl;

    while(p1.getHP()>0 && p2.getHP()>0)
    {
        p1.receiveDamage(p2.attack());
        p2.receiveDamage(p1.attack());
        cout << p1.getHP() << "\t" << p2.getHP() << endl;
    }

    if(p1.getHP()==0)
    {
        cout << p2.getCharType() << " is the winner." << endl;
    }
    else if(p2.getHP()==0)
    {
        cout << p1.getCharType() << " is the winner" << endl;
    }
    else
    {
        cout << "Draw" << endl;
    }
}
