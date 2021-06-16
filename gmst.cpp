#include <iostream>
using namespace std;

int main()
{
    unsigned int score = 200;
    score++;
    cout << score << endl;
    score -= 1;
    cout << score << endl;

    int lives = 5;
    --lives;
    lives *=10;
    cout << lives << endl;

    lives = 5;
    int bonus = lives*20;
    cout << bonus;
    cout << "Lives, Bonus:\t" << lives << ",\t" << bonus << endl;

    int playerAlive;
    cin >> playerAlive;
    cout << "Players Alive till now: " << playerAlive << endl;

    int playerDead;
    cin >> playerDead;
    cout << "Dead Player Number: " << playerDead <<endl;

    cout <<" \vPlayer Alive: "<< playerAlive << "\vPlayer Dead: " << playerDead << endl;



    


    return 0;
}
