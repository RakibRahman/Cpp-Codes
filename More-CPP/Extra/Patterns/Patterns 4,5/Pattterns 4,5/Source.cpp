#include <iostream>

using std::cout;
using std::endl;

int main() {
	int p;
	int n;

	cout << "\nPattern 4:" << endl;
	for (p = 6; p >= 1; p--) //to count row use outer loop
	{
		for (n = 6; n >= 1; n--) //to count column use inner loop
		{
			cout << " " << p;
		}
		cout << "\n";
	}
	cout << "\nPattern 5:" << endl;;
	for (p = 6; p >= 1; p--) //to count row use outer loop
	{
		for (n = 6; n >= 1; n--) //to count column use inner loop
		{
			cout << " " << n;
		}
		cout << "\n";
	}
}