#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int n{ 6 };
	int d, f, g;

	cout << "Pattern 30:" << endl;
	for (d = 1; d <= n; d++)
	{
		for (f = n - 1; f >= d; f--)
		{
			cout << " ";
		}
		for (g = 1; g <= d; g++)
		{
			cout<< d << " ";
		}
		cout << endl;
	}

	cout << "\nPattern 31:" << endl;
	for (d = 1; d <= n; d++)
	{
		for (f = n - 1; f >= d; f--)
		{
			cout << " ";
		}
		for (g = 1; g <= d; g++)
		{
			cout << g << " ";
		}
		cout << endl;
	}

	cout << "\nPattern 32:" << endl;
	for (d = 0; d <= n; d++)
	{
		for (f = n - 1; f >= d; f--)
		{
			cout << " ";
		}
		for (g = 0; g <= d; g++)
		{
			cout << char(d+65) << " ";
		}
		cout << endl;
	}

	char nn{ 'G' };
	char r, t, y;
	cout << "\nPattern 33:" << endl;
	for (r = 'A'; r <= nn; r++)
	{
		for (t = nn - 1; t >= r; t--)
		{
			cout << " ";
		}
		for (y = 'A'; y <= r; y++)
		{
			cout << y << " ";
		}
		cout << endl;
	}
}