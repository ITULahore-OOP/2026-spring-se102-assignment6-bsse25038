#include "SpellBlade.h"

SpellBlade::SpellBlade(string hn, int h, int bp, int ar, int mp, int sp):Warrior(hn, h, bp, ar),MagicalEntity(mp, sp){
    cout << "I'm a constructor." << endl;
}
int SpellBlade::calculateHybridDamage(){
    return basePower + spellPower;
}