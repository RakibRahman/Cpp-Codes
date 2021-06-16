//SCORE RATER 3.0
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
	int num;
	cout << "Enter Your Score: " << endl;
	cin >> num;
	if (num >= 3000)
	{
		cout << "You scored 3000 or more. Very Nice!\n";
	}
	else if(num >=1500)
	{
		cout << "You scored 1500 or More.Not Bad\n";
	}
	else if (num >= 500) {
		cout << "You scored 500 or less.Not so Bad\n";
	}
	else {
		cout << "You scored less than 200.Not Good\n";
	}

	int tym;
	cout << "Enter Time: ";
	cin >> tym;
	if (tym <= 10) {
		cout << "Time is Now " << tym << " A.M\n";
		cout << "GOOD MORNING";
	}
	else if (tym < 18) {
		cout << "Time is Now " << tym << " P.M";
		cout << "\nGOOD AFTERNOON";
	}
	else {
		cout << "Good EVENING";
	}


	return 0;
}