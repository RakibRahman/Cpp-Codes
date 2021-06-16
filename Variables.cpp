#include <iostream>
using namespace std;

int main()
{
    int score;
    char rePlay;
    bool protectorOn;
    double distance;

    short life,enemyKilled;

    score = 23;
    rePlay = 'Y';
    protectorOn = true;
    life = 5;
    distance = 127.3;
    enemyKilled = 9;
    double engineTemp = 1323.2;

    cout <<"\nMatch Score:" << score << endl;
    cout << "Distance Traveled:" << distance << endl;
    cout << "Max Level Shield:" << protectorOn << endl;
    cout << "Player Lives:" << life << endl;
    cout << "Enemy Killed:" << enemyKilled << endl;
    cout << "Play the game again?  "  << rePlay << endl;
    cout << "engineTemp:" << engineTemp << endl;

    int playTime;
    cout << "How much time do you played the Game?" << endl;
    cin >> playTime;
    cout << "Time played(Minutes): " << playTime << endl;

    typedef unsigned short int ushort;
    ushort bonus = 23;
    cout << "\nBonus Gained:" << bonus << endl;

    return 0;
     

}