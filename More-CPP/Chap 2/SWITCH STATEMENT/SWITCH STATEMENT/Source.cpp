//Menu Chooser
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main() {
	cout << "Difficulty Levels:";
	cout << "\nEasy";
	cout << "\nNormal";
	cout << "\nHard";
	cout << "\nExtreme";

	int choice;
	cout << "\n\nChoose your Level:";
	cin >> choice;

	switch (choice) {
	case 1:
		cout << "You have picked Easy.\n";
		break;
	case 2:
		cout << "You have picked Normal.\n";
		break;
	case 3:
		cout << "You have picked Hard.\n";
		break;
	case 4:
		cout << "You have picked Extreme.\n";
		break;
	default:
		cout << "You made an illegal choice!!!";
	}
	return 0;

}