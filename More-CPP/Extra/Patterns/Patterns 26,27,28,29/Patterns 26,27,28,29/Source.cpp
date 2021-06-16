#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int n{ 6 };
	int x, y, z;
	cout << "Pattern 26: " << endl;
	for (x = 1; x <= n; x++)
	{
		for (y = n - 1; y >= x; y--)
		{
			cout << " ";
		}

		for (z = 1; z <= x; z++)
		{
			cout << x; //to print raw values
		}
		cout << endl;
	}

	cout << "\nPattern 27: " << endl;
	for (x = 1; x <= n; x++)
	{
		for (y = n - 1; y >= x; y--)
		{
			cout << " ";
		}

		for (z = 1; z <= x; z++)
		{
			cout << z; //to print column values
		}
		cout << endl;
	}
	cout << "\nPattern 28: " << endl;
	for (x = 0; x <= n; x++)
	{
		for (y = n - 1; y >= x; y--)
		{
			cout << " ";
		}

		for (z = 0; z <= x; z++)
		{
			cout << char(x + 65);
		}
		cout << endl;
	}

	cout << "\nPattern 29: " << endl;
	for (x = 0; x <= n; x++)
	{
		for (y = n - 1; y >= x; y--)
		{
			cout << " ";
		}

		for (z = 0; z <= x; z++)
		{
			cout << char(z + 65);
		}
		cout << endl;
	}
	return 0;
}