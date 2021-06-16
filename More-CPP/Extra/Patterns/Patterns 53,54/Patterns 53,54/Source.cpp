#include <iostream>

using std::cout;
using std::endl;

int main() {
	int r{ 7 }; //size
	int q, w;

	cout << "Pattern 53:" << endl;
	for (q = 1; q <= r; q++)
	{
		for (w = 1; w <= r; w++)
		{
			if (q == w)
			{
				cout <<" "<< "O";
			}
			else
			{
				cout << " "<<"X";
			}
		}
		cout << endl;
	}
	cout << "Pattern 54: " << endl;
	for (q = 1; q < +r; q++)
	{
		for (w = 1; w <= r; w++)
		{
			if (w == q)
			{
				cout <<" "<< "X";
			}
			else
			{
				cout <<" "<< "-";
			}
		}
		cout << endl;
	}
	return 0;
}