#ifndef ARCHER_H_INCLUDED
#define ARCHER_H_INCLUDED
#include "rpgChar.h"

class Archer:public RPGCharacter
{
public:
    Archer();
    ~Archer();
    void setHP(int);
    string getCharType();
    int attack();
    void receiveDamage(int);
};



#endif // ARCHER_H_INCLUDED
