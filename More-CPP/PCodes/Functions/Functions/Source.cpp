#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void cppFunction()
{
	cout << "We are in a Funtion" << endl;
	int x = 10;
	int y = 30;
	int sum = x + y;
	cout << " Sum of X & y is: " << sum << endl;
}
//Passing Arguments & Parameters in function
void multiply(int num1,int num2) 
{
	cout << "Multiplication of " << num1 << " and " << num2 << " is: "<<(num1 * num2) << endl;
}
int main()
{
	cppFunction(); // to call a function
	multiply(25 , 26);

	int a, b;
	cout << "Enter two numbers:" << endl;
	cin >> a;
	cin >> b;
	multiply(a, b);

	return 0;
}