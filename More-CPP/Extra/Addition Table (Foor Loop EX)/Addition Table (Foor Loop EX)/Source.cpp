#include <iostream>

using std::cin;
using std::cout; 
using std::endl;

int main()
{
	int y, u, i;
	cout<<"Enter a number to start addition: ";
	cin >> u;
	cout << "Enter a number to limit the table: ";
	cin >> i;
	cout << "The table is: " << endl;

	cout << "Addition Table:" << endl;
	for (y = 1; y <= i; y++)
	{
		cout << y << "+" << u << " = " << y + u<<endl;
	}
	cout << endl;

	cout << "Multiplication Table:" << endl;
	for (y = 1; y <= i; y++)
	{
		cout << y << "*" << u << " = " << y * u << endl;
	}



}