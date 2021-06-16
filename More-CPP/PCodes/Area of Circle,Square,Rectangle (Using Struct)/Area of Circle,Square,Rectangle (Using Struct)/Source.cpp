#include <iostream>
//Demonstrating Structure
using std::cin;
using std::cout;
using std::endl;

struct Circle
{
	//2 * PI * radius;
	float pi; //3.14
	float radius;
};

struct Square
{
	//A=s^2
	int s;
};

struct Rectangle
{
	int width;
	int height;
};

int main()
{
	struct Circle circle1;
	struct Square square1;
	struct Rectangle rectangle1;

	cout << "To get area of circle enter radius value: " << endl;
	cin >> circle1.radius;
	cout << "To get area of circle enter pi value: " << endl;
	cin >> circle1.pi;
	cout << endl;

	cout << "To get the area of square enter length:" << endl;
	cin >> square1.s;
	cout << endl;

	cout << "To get the area of square enter height:" << endl;
	cin >> rectangle1.height;
	cout << "To get the area of square enter width:" << endl;
	cin >> rectangle1.width;
	cout << endl;

	cout << "Area of the Circle: " << (2 * circle1.pi) * circle1.radius << endl;
	cout << "Area of the Square: " << square1.s * square1.s << endl;
	cout << "Area of the Rectangle: " << rectangle1.height * rectangle1.width << endl;

	return 0;
}