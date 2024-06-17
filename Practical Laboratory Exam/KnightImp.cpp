#include "knight.h"

Knight::Knight()
{
    hp = hp+(hp*0.25);
}

Knight::~Knight()
{

}

void Knight::setHP(int hp1)
{
    hp=hp1;
    if(hp>300+(300*0.25))
    {
        hp = 300+(300*0.25);
    }
}

string Knight::getCharType()
{
    RPGCharacter::getCharType();
    return "Knight";
}

int Knight::attack()
{
    srand(time(NULL));
    int critChance = rand()%100+1;
    int damage=rand()%25;
    if(critChance <= 20)
    {
        return damage*2;
    }
    return damage;
}

void Knight::receiveDamage(int damage)
{
    RPGCharacter::receiveDamage(damage);
}
