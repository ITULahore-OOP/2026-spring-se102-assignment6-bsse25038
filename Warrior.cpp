#include "Warrior.h"

Warrior::Warrior(string hn, int h, int bp, int ar):Hero(hn, h, bp){
    this->armorRating = ar;
}
int Warrior::getArmor(){
    return armorRating;
}
int Warrior::calculateEffectiveHealth(){
    return health + ( armorRating*2 );
}