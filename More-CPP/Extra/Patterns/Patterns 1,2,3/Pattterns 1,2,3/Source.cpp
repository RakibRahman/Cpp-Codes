#include <iostream>
using std::cout;
using std::endl;

int main() {
	int i, j;
	cout << "\nPattern 1:" << endl;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			cout << " "<<"*";
		}
		cout << endl;
	}
	cout << "\nPattern 2:" << endl;
	for (i = 1; i < 6; i++) {
		for (j = 1; j < 6; j++) {
			cout << " "<<i;
		}
		cout << endl;
	}

	cout << "\nPattern 3:" << endl;
	for (i = 1; i < 6; i++) {
		for (j = 1; j < 6; j++) {
			cout << " "<<j;
		}
		cout << endl;
	}
}