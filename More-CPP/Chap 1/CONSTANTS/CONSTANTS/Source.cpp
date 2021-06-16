//Game States 3.0
#include <iostream>
using std::cout;
using std::endl;

int main() {
	const int KILL_POINTS = 120;
	int enemyKilled = 10;
	int score = KILL_POINTS * enemyKilled;
	cout << "Score is: " << score << endl;
	/*It is also possible to put const either before or after the type. i.e int const KILL_POINTS */

	enum difficulty {NOVICE,EASY,NORMAL,HARD,EXTREAME};
	difficulty	myDifficulty = EASY;
	difficulty levelNum;
	levelNum = HARD;
	cout << "\nLevel Difficulty: " << levelNum+1 << endl;

	enum fireArms {AK47 = 47, UMP9 = 9, M416 = 16, VECTOR};
	fireArms myfireArms = VECTOR;

	/*Because I didn’t assign a value to
VECTOR , it’s initialized to 17 */

	cout << "\nCost to increase fireamrs amount: " << (AK47 - myfireArms) << " Recource points" << endl;
	return 0;

}
