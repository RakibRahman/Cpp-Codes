//Game States
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
	int score;
	double distance;
	char playAgain;
	bool defenceUp;

	short lives, enemyKilled;

	score = 0;
	distance = 960.33;
	playAgain = 'y';
	defenceUp = true;
	lives = 5;
	enemyKilled = 10;

	double engineTemp = 1217.35;

	cout << "\nScore: "		<< score << endl;
	cout << "\nDistance: "	<< distance << endl;
	cout << "\nplayAgain: "		<< playAgain << endl;

	//SKIPPING defenceUp SINCE YOU DONT GENERALLY PRINT BOOLEAN VALUES

	cout << "\nLives: "		<< lives << endl;
	cout << "\nPlayer Killed: " << enemyKilled << endl;
	cout << "EngineTemp: " << engineTemp << endl;

	int bullets;
	cout << "How much bullets do you need?" << endl;
	cin >> bullets;
	cout << "Bullets needed: " << bullets << endl;

	typedef unsigned short int ushort;
	ushort bonus{ 12 };
	cout << "\nBonus: " << bonus << endl;
	
	typedef unsigned long ulong;
	ulong timePlayed{ 256 };
	cout << "Total Played: " << timePlayed<< " times!" << endl;
	//Using typedef doest not actually create a new data class, rather it defines a new name for an existing type.
	typedef float xp;
	xp gain{ 25.3 };
	cout << "\nLevel XP Gain: " << gain << " points" << endl;

	return 0;




}
