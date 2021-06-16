#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int absolute(int); // Function prototype
float absolute(float); // Function prototype

int main()
{
	cout << "This program finds the absolute value of an integer/float." << endl;
	cout << "Enter an integer & float (positive or negative): ";
	int a;
	float b;
	cin >> a>> b;

	cout << "Absolute value of integer " << a << " is " << absolute(a) << endl;
	cout << "Absolute Value of float " << b << " is " << absolute(b);
	return 0;
}
int absolute(int var) {
	if (var < 0) //condition to check absolute value
	{
		var = -var; //converting to absolute value
	}
	return var;

}
float absolute(float var) {
	if (var < 0.0) 
	{
		var = var * (-1); //another way for converting to absolute value
	}
	return var;

}