#include <iostream>
#include <ctime>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;

int main() {
	srand(static_cast<unsigned int>(time(0)));
	int ranNumber = rand() % 100 + 1; //Generates a number between 1 to 100
	int tries = 0;
	int guess;

	cout << "\t\t\tWelcome To 'Guess My Number'" << endl;

	do {
		
		cout << "\nEnter your guessed number: ";
		cin >> guess;
		++tries;

		if (guess > ranNumber) {
			cout << "Guessed Number is too high";
		}
		else if (guess < ranNumber) {
			cout << "Guessed Number is too low";
		}
		else {
			cout << "Congrats!!!" << endl;
			cout << "You Got the Correct Number!" << endl;
			cout << "It took " << tries << " to get the right number" << endl;
		}
	} while (guess != ranNumber);

	return 0;

}

