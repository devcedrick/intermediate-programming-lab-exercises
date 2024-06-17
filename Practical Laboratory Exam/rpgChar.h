#ifndef RPGCHAR_H_INCLUDED
#define RPGCHAR_H_INCLUDED
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

class RPGCharacter
{
protected:
    int hp;
    string charType;
public:
    RPGCharacter();
    ~RPGCharacter();
    void setHP(int);
    int getHP();
    virtual string getCharType();
    virtual int attack()=0;
    void receiveDamage(int);
};

#endif // RPGCHAR_H_INCLUDED
