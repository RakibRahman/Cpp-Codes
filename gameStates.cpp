#include <iostream>
using namespace std;

int main()
{
    unsigned int score = 2310;
    cout << "\nScore: " << score <<endl;

    score = score+400;
    cout << "\nScore: " << score <<endl;

    score+=290;
    cout << "\nScore: " << score <<endl;

    //increment operator

    int lives = 3;
    ++lives;
    cout << "\nLives: " << lives <<endl;

    int lives2=4;
    lives2++;
    cout << "\nLives: " << lives2 <<endl;

    int lives3 =5;
    int bonus = lives3*2;
    cout << "lives, Bonus: " << lives3 << ", " << bonus << endl;
    
    int lives4 = 2;
    bonus = lives4++ * 4;
    cout << "lives, Bonus: " << lives4 << ", " << bonus << endl;

    //integer wrap around
    score = 4294967295;
    cout << "\nScore: " << score <<endl;
    ++score;
    cout << "\nScore: " << score <<endl;

    return 0;



}