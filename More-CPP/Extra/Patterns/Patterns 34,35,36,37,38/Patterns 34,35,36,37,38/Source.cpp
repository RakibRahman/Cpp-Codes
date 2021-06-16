#include <iostream>

using std::cout;
using std::endl;

int main() {
	int n{ 6 };
	int j, k, l;

	cout << "Pattern 34:" << endl;
	for (j = n; j >= 1; j--)
	{
		for (k = n - 1; k >= j; k--)
		{
			cout << " ";
		}
		for (l = 1; l <= j; l++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << "\nPattern 35:" << endl;
	for (j = n; j >= 1; j--)
	{
		for (k = n - 1; k >= j; k--)
		{
			cout << " ";
		}
		for (l = 1; l <= j; l++)
		{
			cout << j;
		}
		cout << endl;
	}

	cout << "\nPattern 36:" << endl;
	for (j = n; j >= 1; j--)
	{
		for (k = n - 1; k >= j; k--)
		{
			cout << " ";
		}
		for (l = 1; l <= j; l++)
		{
			cout << l;
		}
		cout << endl;
	}

	cout << "\nPattern 37:" << endl;
	for (j = n; j >= 0; j--)
	{
		for (k = n - 1; k >= j; k--)
		{
			cout << " ";
		}
		for (l = 0; l <= j; l++)
		{
			cout <<char(j+65);
		}
		cout << endl;
	}

	cout << "\nPattern 38:" << endl;
	for (j = n; j >= 0; j--)
	{
		for (k = n - 1; k >= j; k--)
		{
			cout << " ";
		}
		for (l = 0; l <= j; l++)
		{
			cout << char(l + 65);
		}
		cout << endl;
	}
}