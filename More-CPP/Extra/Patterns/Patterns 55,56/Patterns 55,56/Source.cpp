#include <iostream>

using std::cout;
using std::endl;

int main() {
	int n{ 9 };
	int v, b;

	cout << "\Pattern 55:" << endl;
	for (v = 1; v <= n; v++)
	{
		for (b = 1; b <= n; b++)
		{
			if (v == b || b == n-v+1) //(j==n-i+1)to get shape like x 
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

	cout << "\nPattern 56:" << endl;
	for (v = 1; v <= n; v++)
	{
		for (b = 1; b <= n; b++)
		{
			if (v == b || (v + b) == (n + 1)) //same formula as (j==n-i+1 to get shape like x
			{
				cout << " " << "X";
			}
			else
			{
				cout <<" "<<"O";
			}
		}
		cout << endl;
	}
}