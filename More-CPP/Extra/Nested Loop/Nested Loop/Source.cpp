#include <iostream>

using std::cout;
using std::endl;

int main() {
	int i;
	int j;
	for (i = 0; i <= 1; i++) //outer loop
	{
		cout << "\nouter loop 1";
		for (j = 1; j <= 3; j++) // inner loop -runs maximum times for each iteration of outer loop
		{
			cout << "\ninner loop";
		}
		cout << "\nouter loop 2";
	}
	for (i = 1; i <= 2; i++)
	{
		for (j = 1; j <= 3; j++)
		{
			cout << "\nvalue of i: " << i << " Value of j: " << j;
		}

	}
	cout << "\nMultiplication Table from 1 to 10: "<<endl;
	for (i = 1; i <= 10; i++)
	{
	
		for (j = 1; j <= 10; j++)
		{
			cout << "\t" << i * j;

		}
		cout << "\n";
	}
}