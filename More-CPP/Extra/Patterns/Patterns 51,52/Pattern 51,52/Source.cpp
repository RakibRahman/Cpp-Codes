#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int n{ 5 }; //size (Odd Number)
	int x, y;

	cout << "Pattern 51:" << endl;
	for (x = 1; x <= n; x++) //outer loop
	{
		for (y = 1; y <= n; y++) //Inner loop
		{
			if (x == 3 || y == 3) //3 is the center point of this matrix. 
			{
				cout << "x"; //Symbol x
			 }
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}


	int nn{ 9 };
	cout << "\nPattern 51 V2:" << endl;
	for (x = 1; x <= nn; x++) //outer loop
	{
		for (y = 1; y <= nn; y++) //Inner loop
		{
			if (x == (nn/2)+1 || y == (nn / 2) + 1) //(n/2)+1 to get the center.
			{
				cout << "x"; //Symbol x
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	cout << "\nPattern 52:" << endl;
	int n2{ 11 };
	int u, i;
	for (u = 1; u <= n2; u++)
	{
		for (i = 1; i <= n2; i++)
		{
			if (u == (n2 / 2) + 1 || i == (n2 / 2) + 1)
			{
				cout <<" "<< "X";
			}
			else
			{
				cout <<" " <<"O";
			}
		}
		cout << endl;
	}
}