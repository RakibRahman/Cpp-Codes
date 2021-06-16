//Play Again
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
	/*
	char confirm{'y'};
	while (confirm == 'y') {
		cout << "\n**Played an exciting game**";
		cout << "\nPlay Again? y/n :";
		cin >> confirm;
	}
	cout << "\nGoodBye then!!!";.
	*/

	/*
	int a{ 1 };
	while (a < 21) {
		cout << "value of a: " << a << endl;
		a++;
	}

	*/
	
	/*
	int n{ 1 }, times{ 20 };
	while (n <= times) {
		cout << "C++ while loop " << n << endl;
		n++; // the same as n++ = n + 1; 
	}
	*/
	int number{ 1 };
	int count = 0;
	while (number >= 1)
	{
		cout << "\tEnter a Number: \n\n";
		cin >> number;
		number = number / 2;
		count++; // the same as count = count + 1; 
		cout << " Result: " << number << "\n";
		cout << "Count: " << count << "\n";
	}
	cout << "\nWrong number to calculate!";

	return 0;
}