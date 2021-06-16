#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
	int num;
	int count;
	int b;

	cout << "\nEnter a number to Print all prime numbers less than or equal to given number" << endl;
	cin >> num;
	cout << "\Prime Numbers are: ";
	for (b = 2; b <= num; b++) 
	{
		count = 2;
		while (b % count != 0)
		{
			count++;
		}
		if (count == b) 
		{
			cout << "\n" << b << " is a prime number";;
		}
		
	}
	
	return 0;
}