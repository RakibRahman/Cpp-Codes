#include <iostream>
using std::cout;
using std::endl;

int main() {
	char z;
	char s;

	cout << "\nPattern 6:" << endl;
	for (z = 'A'; z <= 'E'; z++)
	{
		for (s = 'A'; s <= 'E'; s++) {
			cout << " " << z;
		}
		cout << "\n";
	}

	cout << "\nPattern 7:" << endl;
	for (z = 'A'; z <= 'E'; z++)
	{
		for (s = 'A'; s <= 'E'; s++) {
			cout << " " << s;
		}
		cout << "\n";
	}

	cout << "\nPattern 8:" << endl;
	for (z = 'E'; z >= 'A'; z--)
	{
		for (s = 'E'; s >= 'A'; s--) {
			cout << " " << z;
		}
		cout << "\n";
	}

	cout << "\nPattern 9:" << endl;
	for (z = 'E'; z >= 'A'; z--)
	{
		for (s = 'E'; s >= 'A'; s--) {
			cout << " " << s;
		}
		cout << "\n";
	}

	return 0;
}