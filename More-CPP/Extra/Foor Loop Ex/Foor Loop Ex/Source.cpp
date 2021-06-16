#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
	int arr[] = { 10,21,32,43,54,65 };
	cout << "Showing array elements using for loop: " << endl;
	for (int a = 0; a < 6; a++) {
		cout << arr[a] << endl;

	}
	//Positive integers 1, 2, 3, 4... are known as natural numbers.
	//Finding out sum of natural number
	int n, sum = 0;

	cout << "Enter a Positive Number:" << endl;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		sum += i;
		//sum = n*(n+1) / 2;
	}
	cout << "sum = " << sum << endl;
//another way to find out sum of natural number
	int S, pn;
	cout << "enter a number to sum natural numbers:" << endl;
	cin >> pn;
	S = pn * (pn + 1) / 2; // formula : n(n+1) / 2 
	cout << S;

	return 0;
}