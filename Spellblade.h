#ifndef SPELLBLADE_H
#define SPELLBLADE_H
#include <iostream>
#include <string>
#include "Warrior.h"
#include "MagicalEntity.h"
using namespace std;

class SpellBlade:public Warrior,public MagicalEntity{
public:
    SpellBlade(string hn, int h, int bp, int ar, int mp, int sp);
    int calculateHybridDamage();
};
#endif