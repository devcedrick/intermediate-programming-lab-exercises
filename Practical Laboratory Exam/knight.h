#ifndef KNIGHT_H_INCLUDED
#define KNIGHT_H_INCLUDED
#include "rpgChar.h"

class Knight:public RPGCharacter
{
public:
    Knight();
    ~Knight();
    void setHP(int);
    string getCharType();
    int attack();
    void receiveDamage(int);
};


#endif // KNIGHT_H_INCLUDED
