#include <iostream>

int main()
{
    const int DAMAGE_POINTS = 266;
    int playerKilled = 5;
    int gameResult = DAMAGE_POINTS*playerKilled;
    std::cout << "Score Gained: " << gameResult << std::endl;
    
    enum difficulty {NOVICE,EASY,NORMAL,AMATEUR,PRO,VETERAN};
    difficulty myDifficulty = NORMAL;

    enum shipCost {FIGHTER_COST=25,GUNNER_COST=55,BOMBER_COST=60};
    shipCost myshipCost = GUNNER_COST;
    std::cout <<"\To Upgrade My Ship to next level,a Fighter will cost " 
                << (GUNNER_COST-FIGHTER_COST) << " Resource Points.\n";

    const int PLAYER_JOINED = 96;
    enum playerStates {NOOB=20,NEW=40,EXPERT=16,HACKER=10};
    playerStates myRank = NOOB;
    std::cout << "\nI'm one of the " << PLAYER_JOINED << " players that joined the game & "
                << (PLAYER_JOINED-NOOB) << " players are good in this game\n"
                << "There are " << NOOB << " Noobs" << " And i'm one of them\n";


    return 0;




}