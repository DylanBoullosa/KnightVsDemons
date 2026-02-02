#include <iostream>
using namespace std;

//Knights
int knightsHealth = 200;
int knightsDamage = 60;
int knightsHorseHealth = 100;

//Knights Healing Potions
int smallPotion[3] = { 50, 40, 30 };
int bigPotion[2] = { 100, 80 };

//Demons
const int demonCOUNT = 5;
int demonsHealth[5] = { 80, 100, 70, 90, 60 };
int demonsDamage[5] = { 40, 50, 35, 45, 40 };

//Demon Boss
int bossHealth = 300;
int bossDamage = 60;

//Castle Door
int doorHealth = 100;

//Rounds
int roundNumber = 1;
int demonsAlive = demonCOUNT ;

int main(){
//Battle

//GameLoop
bool gameRunning = true;

while(gameRunning){
    cout << "Wave " << roundNumber << " will now begin " << endl;
}
if(demonsAlive <= 0){
    cout << "YOU WIN!\n";
    gameRunning = false;
}else{
    gameRunning = true;
}

    return 0;
}