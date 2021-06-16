// C++ program to add numbers until user enters 0
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
	int n ;
	int sum{ 0 };
	do {
		cout << " Enter a Number: " << endl;
		cin >> n;
		//sum = n+n; // same number total addition
		sum += n; //addition with previous inputted number with current inputted number
		cout << "Addition result: " << sum << endl;
	} while (n != 0); // "!=" = not equal 

	cout << "Total sum = " << sum;

	return 0;

}