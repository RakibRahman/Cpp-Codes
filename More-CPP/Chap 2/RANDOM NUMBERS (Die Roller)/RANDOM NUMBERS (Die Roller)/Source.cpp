//Die Roller
//Generating Random Numbers

#include <iostream>
#include <ctime>
#include <cstdlib>

using std::cout;
using std::endl;

int main() {
	srand(static_cast<unsigned int>(time(0))); //initialize random number generator

	int randomNumber{ rand() }; // Generates random number

	int die = (randomNumber % 6) + 1; //Get a number between 1 to 6
	cout << "You rolled " << die << " on die!" << endl;
	//cout << RAND_MAX; //the maximum random number rand() can generate
	return 0;
}

