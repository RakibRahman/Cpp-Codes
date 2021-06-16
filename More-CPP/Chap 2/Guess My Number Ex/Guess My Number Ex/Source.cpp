#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cin;
using std::cout;
using std::endl;

int main() {
	cout << "\nGuess My Number:  Player Vs Pc\n";

	srand(static_cast<unsigned int>(time(0)));	// seed random number generator

	int guess;
	int tries = 0;
	int number;

	cout << "\tWelcome to Guess My Number\n\n";
	cout << "Enter a number (1-100): ";
	cin >> number;

	do
	{
		guess = rand() % 100 + 1; // random number between 1 and 100
		cout << "\nComputer Guess: ";
		cout << guess;
		++tries;

		if (guess > number)
		{
			cout << " Too high!\n\n";
		}
		else if (guess < number)
		{
			cout << " Too low!\n\n";
		}
		else
		{
			cout << "\nThat's it! You got it in " << tries << " guesses!\n";
		}
	} while (guess != number);
}