//Check Whether Number is Even or Odd
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
	int nmbr;
	cout << "Enter a number: ";
	cin >> nmbr;

	if (nmbr % 2 == 0) {
		cout << nmbr << " Is a Even Number";
	}
	else {
		cout << nmbr << " is a Odd Number";
	}
	return 0;
}