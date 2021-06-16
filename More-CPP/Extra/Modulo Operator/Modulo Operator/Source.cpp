#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int computers{ 5 };
	int users{ 2 };
	int remains = computers % users;
	cout << "Remainder is: " << remains << endl;

	cout << "Odd Numbers below 10:" << endl;
	for (int n = 1; n < 10; ++n)
	{
		if (n % 2 != 0) {
			cout << n*3 << " ";
		}
		cout << endl;
	}
	cout << "Even Numbers below 20:" << endl;
	for (int j = 1; j < 20; j++)
	{
		if (j % 2 == 0)
		{
			cout << j;
		}
		cout << endl;
	}
	return 0;
}