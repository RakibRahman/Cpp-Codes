#include <iostream>

using std::cout;
using std::endl;

int age(int x = 36, int y = 26); //Prototyping a function

int value(int s=25,int d=35) //initialized with default arguments
{
	//int output = 0;
	int output = s * d;
	return output;
}

int main() {
	cout<<value(); //no need to pass parameters
	cout << endl;
	age();
}

int age(int x,int y)
{
	cout << "X is " << x << " years old" << endl;
	cout << "Y is " << y << " years old" << endl;
	return x,y;
}