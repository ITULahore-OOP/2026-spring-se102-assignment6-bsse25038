#ifndef HERO_H
#define HERO_H
#include <iostream>
#include <string>
using namespace std;
class Hero{

protected:
    string heroName;
    int health;
    int basePower;

public:
    Hero(string hn, int h, int bp);
    ~Hero();
    string getName()const;
    int getHealth()const;
    int getPower()const;
    void takeDamage(int damage);
    bool operator>(Hero &other) const;
    int operator+(Hero &other) const;

};
#endif