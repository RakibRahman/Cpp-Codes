#include <iostream>

using std::cout;
using std::endl;
int main() {
	int w;
	int c;

	cout << "Pattern 15:" << endl;
	for (w = 1; w <= 5; w++)
	{
		for(c = 5; c >= w; c--)
		{
			cout << " " << "*";
		}
		cout << "\n";
	}

	cout << "\nPattern 16:" << endl;
	for (w = 1; w <= 5; w++)
	{
		for (c = 5; c >= w; c--)
		{
			cout << " " << w;
		}
		cout << "\n";
	}
	
	cout << "\nPattern 17:" << endl;
	for (w = 1; w <= 5; w++)
	{
		for(c=5;c>=w;c--)
		{
			cout << " " << c;
		}
		cout << "\n";
	}

	cout << "\nPattern 18:" << endl;
	for (w = 5; w >= 1; w--)
	{
		for (c = 1; c <= w; c++)
		{
			cout << " " << w;
		}
		cout << "\n";
	}

	cout << "\nPattern 19:" << endl;
	for (w = 5; w >= 1; w--)
	{
		for (c = 1; c <= w; c++)
		{
			cout << " " << c;
		}
		cout << "\n";
	}
	return 0;
}