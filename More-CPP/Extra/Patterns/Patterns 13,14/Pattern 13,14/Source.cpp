#include <iostream>

using std::cout;
using std::endl;

int main() {
	char r;
	char x;

	cout << "Pattern 13: " << endl;
	for (r = 'A'; r <= 'E'; r++)
	{
		for (x = 'A'; x <= r; x++)
		{
			cout << " " << r;
		}
		cout << "\n";
	}

	cout << "\nPattern 13: " << endl;
	for (r = 'A'; r <= 'E'; r++)
	{
		for (x = 'A'; x <= r; x++)
		{
			cout << " " << x;
		}
		cout << "\n";
	}


	return 0;
}