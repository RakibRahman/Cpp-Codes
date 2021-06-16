//play again
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
	char replay;
	do {
		cout << "Playing an exciting game" << endl;
		cout << "Player Defeated!!!" << endl;
		cout << "Retry From last Save Point? Y or N ?" << endl;
		cin >> replay; 
	} while (replay == 'y');

	cout << "Exiting The Game" << endl;
	return 0;
}