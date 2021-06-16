//SCORE RATER 2.0
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
	int num ;
	cout << "Enter Your Score: " << endl;
	cin >> num;
	if (num >= 300)
	{
		cout << "You scored 300 or more. Very Nice!\n";
	}
	else {
		cout << "You scored less than 300\n";
	}

	return 0;
}