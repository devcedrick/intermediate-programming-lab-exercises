#include "rpgChar.h"

RPGCharacter::RPGCharacter()
{
    hp = 100;
}

RPGCharacter::~RPGCharacter()
{
}

void RPGCharacter::setHP(int hitpoints)
{
    hp = hitpoints;
}

int RPGCharacter::getHP()
{
    return hp;
}

string RPGCharacter::getCharType()
{
    return charType;
}

void RPGCharacter::receiveDamage(int damage)
{
    hp-=damage;
    if(hp<0)
    {
        hp=0;
    }
}


