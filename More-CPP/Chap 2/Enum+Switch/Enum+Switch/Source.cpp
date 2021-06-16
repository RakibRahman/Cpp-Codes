#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
	cout << "Choose your difficulty level:\n";
	cout << "Difficulty Levels\n\n";
	cout << "1 - Easy\n";
	cout << "2 - Normal\n";
	cout << "3 - Hard\n";
	cout << "4 - Extreme\n\n";

	enum difficulty {
		Easy,
		Normal,
		Hard,
		Extreme
	};

	int choice;
	cout << "Enter your choice: ";
	cin >> choice;

		switch (difficulty(choice)) 
		{
		case 1:
			cout << "You picked Easy.\n";
			break;
		case 2:
			cout << "You picked Normal.\n";
			break;
		case 3:
			cout << "You picked Hard.\n";
			break;

		case 4:
			cout << "You picked Extreme.\n";
		default:
			cout << "You made an illegal choice.\n";
		}
}