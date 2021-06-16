//Game States 2.0
#include <iostream>
using  std::cin;
using std::cout;
using std::endl;

int main() {
	unsigned int score{ 1203 };
	cout << "\nScore Is: " << score << endl;

	score = score + 97; //altering value of a variable
	cout << "\nNew Score Is: " << score << endl;

	score += 1000; //using assignment operator
	cout << "\nUpdated Score Is: " << score << endl;

	int lives{ 4 };
	cout << "Remaining Lives: " << lives << endl;
	lives++; //increment operator
	cout << "Total Lives: " << lives << endl;

	
	int bonus = ++lives * 200;
	cout << "Bonus for playing with full Lives: " << bonus<< endl;
	int bonus2 = lives++ * 100;
	cout << "Bonus for playing with half Lives: " << bonus2 << endl;



	//integer wrap around

	score = 4294967295;
	cout << "\nScore Is: " << score << endl;
	++score;
	cout << "\nScore Is: " << score << endl;

	return 0;




}