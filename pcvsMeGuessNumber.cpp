#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    cout << "\tWelcome To Guess My Number V2\n\n";
    srand(static_cast<unsigned int>(time(0)));
    
    int guess;
    int tries = 0;
    int number;

	cout << "Enter a number (1-100): ";
	cin >> number;

    do{
        guess = rand() % 100 + 1;
        cout << "\nComputer Guess: ";
		cout << guess;
		++tries;
        if ( guess > number)
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

    return 0;


}