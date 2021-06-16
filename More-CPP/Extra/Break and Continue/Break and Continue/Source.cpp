#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
	for (int i = 1; i < 6; i++) {
		if (i == 4)
			break; //terminates loop if condition is true
		cout << i << endl;
	}
	for (int i = 1; i < 6; i++) {
		if (i == 2)
			continue; //skips part of loop
		cout << i << endl;
	}

	int num;
	while (1)//always  true 
	{
		cout << "\nEnter a number between 1 to 100 to get its square: ";
		cout << "\nEnter 0 to Terminate!";
		cin >> num;

		if (num == 0) {
			cout << "\nProgram is terminated!";
			break;
		}
		else if (num > 100) {
			cout << "\nNumber is greater than 100!";
			continue;
		}
		
			cout << "Square of " << num << " is: " << (num * num) << endl;

	} //end of while loop
	return 0;
}