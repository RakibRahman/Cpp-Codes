#include <iostream>

using std::cout;
using std::endl;

int main() {
	int n{ 5 };
	int c, v;

	cout << "Pattern 44:" << endl;
	for (c = 1; c <= n; c++)
	{
		for (v = n; v >= 1; v--)
		{
			if (c >= v)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	cout << "Pattern 45:" << endl;
	for (c = 1; c <= n; c++)
	{
		for (v = n; v >= 1; v--)
		{
			if (c >= v)
			{
				cout << "* ";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	cout << "Pattern 46:" << endl;
	for (c = n; c >= 1; c--)
	{
		for (v = n; v >= 1; v--)
		{
			if (c >= v)
			{
				cout << "* ";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	cout << "Pattern 47:" << endl;
	for (c = n; c >= 1; c--)
	{
		for (v = n; v >= 1; v--)
		{
			if (c >= v)
			{
				cout << " " << c;
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	cout << "Pattern 48:" << endl;
	for (c = 1; c <= n; c++)
	{
		for (v = n; v >= 1; v--)
		{
			if (c >= v)
			{
				cout << " " << c;
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	cout << "Pattern 49:" << endl;
	for (c = 1; c <= n; c++)
	{
		for (v = n; v >= 1; v--)
		{
			if (c >= v)
			{
				cout << " " << v;
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	cout << "Pattern 50:" << endl;
	for (c = n; c >= 1; c--)
	{
		for (v = n; v >= 1; v--)
		{
			if (v <= c)
			{
				cout << " " << v;
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}