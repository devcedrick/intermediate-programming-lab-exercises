#include "barbarian.h"

Barbarian::Barbarian()
{
    hp = hp + (hp*0.4);
}

Barbarian::~Barbarian()
{

}

void Barbarian::setHP(int hp1)
{
    hp=hp1;
    if(hp>300+(300*0.4))
    {
        hp = 300+(300*0.4);
    }
}

string Barbarian::getCharType()
{
    RPGCharacter::getCharType();
    return "Barbarian";
}

int Barbarian::attack()
{
    srand(time(NULL));
    int critChance = rand()%100+1;
    int damage=rand()%30;
    if(critChance <= 5)
    {
        return damage*2;
    }
    return damage;
}

void Barbarian::receiveDamage(int damage)
{
    RPGCharacter::receiveDamage(damage);
}
