#ifndef KNIGHT_H
#define KNIGHT_H
#include <iostream>
#include <string>
#include "Warrior.h"
using namespace std;

class Knight:public Warrior{
private:
    int chargeBonus;
public:
    Knight(string hn, int h, int bp, int ar, int cb);
    int getChargeBonus();
    int calculateBurstDamage();
};
#endif