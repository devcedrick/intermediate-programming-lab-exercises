#include "archer.h"

Archer::Archer()
{
    hp = 100;
}

Archer::~Archer()
{
}

void Archer::setHP(int hitpoints)
{
    hp=hitpoints;
    if(hp>300)
    {
        hp=300;
    }
}

string Archer::getCharType()
{
    RPGCharacter::getCharType();
    return "Archer";
}

int Archer::attack()
{
    srand(time(NULL));
    int damage = rand()%20;
    int critChance=rand()%100+1;
    if(critChance <= 80)
    {
        return damage*2;
    }
    return damage;
}

void Archer::receiveDamage(int damage)
{
    RPGCharacter::receiveDamage(damage);
}
