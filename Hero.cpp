#include "Hero.h"

Hero::Hero(string hn, int h, int bp){
    heroName = hn;
    health = h;
    basePower = bp;
}
Hero::~Hero(){

}
string Hero::getName()const{
    return heroName;
}
int Hero::getHealth()const{
    return health;
}
int Hero::getPower()const{
    return basePower;
}
void Hero::takeDamage(int damage){
    if (health > 0){
        health -= damage;
    }
    else
        health = 0;
}
bool Hero::operator>(Hero &other) const{
    if (basePower > other.basePower){
        return true;
    }
    else
        return false;
}
int Hero::operator+(Hero &other) const{
   return health + other.health;
}