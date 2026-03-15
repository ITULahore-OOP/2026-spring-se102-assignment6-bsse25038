#ifndef WARRIOR_H
#define WARRIOR_H
#include <iostream>
#include <string>
#include "Hero.h"
using namespace std;

class Warrior:public Hero{
protected:
    int armorRating;
public:
    Warrior(string hn, int h, int bp, int ar);
    int getArmor();
    int calculateEffectiveHealth();
};
#endif