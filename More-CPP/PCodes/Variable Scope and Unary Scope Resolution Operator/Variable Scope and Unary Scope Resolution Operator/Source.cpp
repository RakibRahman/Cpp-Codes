#include <iostream>

using std::cout;
using std::endl;

int myVariable{ 25 }; //Global Variable

int main()
{
	int myVariable{ 120 }; //local variable

	cout << "Value of local variable: " << myVariable << endl;
	cout << "Value of global variable: " << ::myVariable; // "::" is unary scope resolution operator which is used to call/print global variable
}