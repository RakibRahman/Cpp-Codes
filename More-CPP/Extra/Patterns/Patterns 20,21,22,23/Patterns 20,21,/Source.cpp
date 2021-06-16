#include <iostream>

using std::cout;
using std::endl;

int main() {
	char x;
	char y;

	cout << "Pattern 20:" <<endl;
	for (x = 'A'; x <= 'E'; x++)
	{
		for (y = 'E'; y >= x; y--)
		{
			cout << " " << x;
		}
		cout << endl;
	}
	cout << "\nPattern 21:" << endl;
	for (x = 'A'; x <= 'E'; x++)
	{
		for (y = 'E'; y >= x; y--)
		{
			cout << " " << y;
		}
		cout << endl;
	}

	cout << "\nPattern 22:" << endl;
	for(x='E';x>='A';x--)
	{
		for (y = 'A'; y <= x; y++)
		{
			cout << " " << x;
		}
		cout << endl;
	}

	cout << "\nPattern 23:" << endl;
	for (x = 'E'; x >= 'A'; x--)
	{
		for (y = 'A'; y <= x; y++)
		{
			cout << " " << y;
		}
		cout << endl;
	}
	int w;
	int r;
	cout << "\t\t\tUsing ASCII Codes:" << endl;
	cout << "Pattern 20:" << endl;
	for (w=0;w<=4;w++)
	{
		for (r=4;r>=w;r--)
		{
			cout << " " <<char(w+65) ;// Ascii code of 'A' is 65. B is 66. So, 0+65 = A,65+1=66 for B and so on. 
		}
		cout << endl;
	}
	cout << "Pattern 22:" << endl;
	for (w = 4; w >= 0; w--)
	{
		for (r = 0; r <= w; r++)
		{
			cout << " " << char(w + 65);
		}
		cout << endl;
	}
	return 0;
}