#include <iostream>
using std::cout;
using std::endl;

int main() {
	int const id{ 5 };
	int idNumber[id] { 49,25,12,79,55 };
	int maxId = 0;
	cout << "ID are given below: ";
	for (int roll = 0; roll < id; roll++) {
		if (idNumber[roll] > maxId) {
			maxId = idNumber[roll];
		}
		cout << "\n" << idNumber[roll];
	}
	cout << "\nMax id number is: " << maxId;
}