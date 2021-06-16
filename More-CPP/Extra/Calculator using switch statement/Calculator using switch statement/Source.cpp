#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
	char op;
	float num1, num2;
	
	cout << "Enter operator either + or - or * or / : ";
	cin >> op;

	cout << "Enter two operands:";
	cin >> num1 >> num2;

	switch (op) {
	case '+':
		cout << "Summation output: " << num1 + num2;
		break;
	case '-':
		cout << "Subtraction output: " << num1 - num2;
		break;
	case '*':
		cout << "Multiplication output: " << num1 * num2;
		break;
	case '/':
		cout << "Division output: " << num1 / num2;
		break;
	default:
		cout << "Wrong Input!!!";

	}
	return 0;
}
