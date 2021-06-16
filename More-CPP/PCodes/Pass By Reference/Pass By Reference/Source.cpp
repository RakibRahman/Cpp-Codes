//Original value is modified in call by reference.
//In C++, we can either use pointers or references to for pass by reference.

#include <iostream>
using std::cout;
using std::endl;
// Function to swap two variables 
// by references 
void passByreference(int *x, int *y) 
{
	*x = 256;
	*y = 512;
}

int main()
{
	int a = 140;
	int b = 360;

	cout << "Value of A before Swap:" << a<<endl;
	cout << "Value of B before Swap:" << b<<endl;
	cout << endl;
	passByreference(&a, &b); // Pass reference 
	cout << "Value of A after Swap:" << a << endl;
	cout << "Value of B After Swap:" << b << endl;

	return 0;
}