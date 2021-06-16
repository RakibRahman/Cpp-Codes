#include <iostream>

using std::cout;
using std::endl;

void convert(int data);
void transform(int t, int f);

int main()
{
	//In call by value, original value is not modified.

	int data = 3;
	convert(data);
	cout << "Value of the data is: " << data << endl;

	int i{ 100 };
	int j{ 200 };
	cout << "Before convert, value of I :" <<i << endl;
	cout << "Before convert, value of J :" << j<< endl;

	transform(i, j); // calling a function to swap the values.
	cout << "After convert, value of I :" << i << endl;
	cout << "After convert, value of J :" << j << endl;

	return 0;
}
void convert(int data)
{
	data = 5;
}
void transform(int t, int f) {
	t = 200;
	f = 253;
	int change;
	change = t;
	t = f;
	f = change;
	//value will be unchanged even after exchanging the values of t and f.
	cout <<"Value of T & F :" << t << " and " << f << endl;
}