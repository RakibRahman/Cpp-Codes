#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
	/*int n;
	cin >> n;
	while (n < 21) {
		cout << "Print: " << n++ << endl; // count as 1+ with each number
		n++; // count as 2+
		n++; // count as 3+
	}
	*/
	//Displaying array elements

	int arr [] = { 29,93,31,39,-45 };
	int i{ 0 };
	cout << "Array elements are: " << endl;
	while (i <5) {
		
		cout << arr[i] << endl;
		i++;
		
	}

}
