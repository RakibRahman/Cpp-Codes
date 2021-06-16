//compute factorial of a number
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
	int n, i = 1, fact = 1;
	cout << "enter a positive number ";
	cin >> n;
	while (i <= n) {
		fact = fact * i;
		//fact *= i; //factorial = factorial * i;
		i++;
	}
	cout << "Factorial of " << n << " is " << fact;
	return 0;

}