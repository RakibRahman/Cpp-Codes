#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
	int i = 1;
	while (i != 0) {
		cout << "Enter a number to show message!" << endl;
		cout << "Enter 0 to exit the while loop" << endl;
		cin >> i;
	}
	cout << "You are out of while loop" << endl;

	int s = 1;
	while (s != 0) {
		cout << "Enter any number: "
			<< "\nPress zero to exit;" << endl;
		cin >> s;
		cout << "Square of given number is: " << (s * s) << endl;
	}
	cout << "End of Calculation!";
	cout << "\n1 to 10 counting: " << endl;
	int n = 1;
	while (n <= 10) {
		cout << n << endl;
		n++;
	}
	cout << "\nCounting 1 to 30 by incrementing 2: "<< endl;
	int m;
	cout << "Enter a number: " << endl;
	cin >> m;
	while (m <= 30) {
		cout <<"\t"<< m << endl;
		m += 2;

	}
}