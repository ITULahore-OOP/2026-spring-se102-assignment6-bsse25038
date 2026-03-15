#include "Guild.h"

Guild::Guild(string gn){
    guildName = gn;
    memberCount=0 ;
}
Guild::~Guild(){
    for(int i=0; i<memberCount; i++){
      roster[i] = nullptr;
    }
   cout << "The guild " << guildName << " has been disbanded!"<<endl;

}
int Guild::calculateTotalGuildPower(){
int total = 0;
    for (int i = 0; i<memberCount; i++){
    total +=roster[i]->getPower();
    }
return total;
}
void Guild::displayGuildStats(){
     cout << "Guild Name: " << guildName << endl;
    cout << "Total Members: " << memberCount <<"/15"<< endl;
    cout << "Total Guild Power: " << calculateTotalGuildPower() << endl;


}
void Guild::operator+=(Hero* newHero){
    if (memberCount < 15) {
      roster[memberCount] = newHero;
       memberCount++;
       return;
    }
    else

    cout << "Guild is at full capacity!"<<endl ;

}
ostream& operator<<(ostream& os, const Guild& g){


     os << "Guild: " << g.guildName <<"\n";

    os << "Members: " << g.memberCount <<"\n";
    for (int i = 0; i < g.memberCount; i++)
    {

        os << "- " << g.roster[i]->getName() << " (Power: " << g.roster[i]->getPower() << ")" << endl;}

    return os;


}