#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
	int num;
	int count=0;
	int b;
	cout << "Enter a Number to check if its prime or not:";
	cin >> num;
	for (b = 1; b <= num; b++) 
	{
		if (num % b == 0) {
			count++;
		}
	}
	if (count == 1)
		printf("1 is neither a prime nor composite number.");

	else if (count == 2) {
		cout << num << " is a prime number";
	}
	else {
		cout << num << " is not a prime number";
	}
}