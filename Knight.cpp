#include "Knight.h"

Knight::Knight(string hn, int h, int bp, int ar, int cb):Warrior(hn, h, bp,ar){
    this->chargeBonus = cb;
}
int Knight::getChargeBonus(){
    return chargeBonus;
}
int Knight::calculateBurstDamage(){
    return basePower + chargeBonus;
}