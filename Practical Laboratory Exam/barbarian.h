#ifndef BARBARIAN_H_INCLUDED
#define BARBARIAN_H_INCLUDED
#include "rpgChar.h"
class Barbarian:public RPGCharacter
{
public:
    Barbarian();
    ~Barbarian();
    void setHP(int);
    string getCharType();
    int attack();
    void receiveDamage(int);
};

#endif // BARBARIAN_H_INCLUDED
