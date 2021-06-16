#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
	int array[50]{};
	int elements;
	int c;
	int min;
	int location{ 1 };

	cout << "Enter Numbers of element in  Array: " << endl;
	cin >> elements;

	cout << "Enter " << elements << " integers:" << endl;
	for (c = 0; c < elements; c++) {
		cin >> array[c];
		//cout <<"\n"<< array[c] << endl;
	}
	cout << "Inputted numbers are:";
	for (c = 0; c < elements; c++) {
		cout << "\n" << array[c] << endl;
	}
	min = array[0];
	for (c = 0; c < elements; c++) {
		if (array[c] < min) {
			min = array[c];
			location = c + 1;
		}
	}

	cout << "Smallest number is: " << min << " and its location is: " << location;

	int max = array[0];
	for (c = 0; c < elements; c++) {
		if (array[c] > max) {
			max = array[c];
			location = c + 1;
		}
	}
	cout << "\nLargest number is: " << max << " and its location is: " << location;
	return 0;
}