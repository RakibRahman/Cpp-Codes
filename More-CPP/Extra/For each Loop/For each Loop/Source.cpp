#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

int main() {
	//access array elements using for loop
	int arr[] = { 49,50,69,79 };
	int i;
	cout << "\nArrays elements are:" << endl;
	for (i = 0; i < +4; i++) {
		cout << "\n" <<arr[i]<<endl;
	}

	//using for each loop to access array elements
	//for each loop can access array element quickly with initializatio,condition & increment/decrement

	for (int i : arr) {
		cout << "\n" << i;
	}

	string laptop[] = { "MSI","Dell","HP","Asus","Razer","Lenovo" };
	for (string str : laptop) {
		cout<<"\nBest Laptop Brand:"<<endl;
		cout<<"\n"<< str;
	}

	string names[] = {"Zakir","Sabbir","Shuvo","Rakib"};
	cout << "\nTeam Members are: " << endl;
	for (string nm : names) {
		cout << "\n" << nm;
	}
}