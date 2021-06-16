#include <iostream>

using std::cout;
using  std::endl;

int main()
{
	//A pointer is a variable whose value is the address of another variable
	int var = 100;
	cout <<"Address of var variable: "<< &var << endl; // " & " Determines the address of a variable.

	int* Pvar; //" * " Access the value of an address.
	Pvar = &var;
	cout << "Address of var variable: "<<Pvar << endl;
	cout << *Pvar << endl;

	var = 26;
	cout << Pvar << endl;
	cout <<"Value of var Variable: "<< *Pvar << endl;

	//swap 2 numbers without using 3rd variable with POINTERS
	int a{ 20 };
	int b{ 30 };
	int* p1 = &a;
	int* p2 = &b;

	cout << "Before swap: *p1=" << *p1 << " and *p2=" << *p2 << endl;

	*p1 = *p1 + *p2;
	*p2 = *p1 - *p2;
	*p1 = *p1 - *p2;

	cout << "After swap: *p1=" << *p1 << " and *p2=" << *p2 << endl;

	return 0;
}