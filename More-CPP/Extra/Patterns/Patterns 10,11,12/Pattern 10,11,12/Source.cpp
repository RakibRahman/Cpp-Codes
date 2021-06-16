#include <iostream>

using std::cout;
using std::endl;

int main() {
	int x;
	int y;
	cout << "Pattern 10:" << endl;
	for(x=1;x<=5;x++)
	{
		for (y = 1; y <= x; y++) {
			cout << " " << "*";
		}
		cout << "\n";
	}

	cout << "Pattern 11:" << endl;
	for (x = 1; x <= 5; x++)
	{
		for (y = 1; y <= x; y++) {
			cout << " " << x;
		}
		cout << "\n";
	}

	cout << "Pattern 10:" << endl;
	for (x = 1; x <= 5; x++)
	{
		for (y = 1; y <= x; y++) {
			cout << " " << y;
		}
		cout << "\n";
	}
	return 0;
}