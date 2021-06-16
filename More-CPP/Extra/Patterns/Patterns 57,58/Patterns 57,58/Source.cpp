#include <iostream>

using std::cout;
using std::endl;

int main() {
	int h{ 8 };
	int f, g;

	cout << "\nPattern 57:" << endl;
	for (f = 1; f <= h; f++)
	{
		for (g = 1; g <= h; g++)
		{
			if (f == 1 || f == h || g == 1 || g == h) //(i==1|| i=n || j==1 || j==n) to get pattern/shape like square(box)
			{
				cout << "#";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	cout << "\nPattern 58:" << endl;
	for (f = 1; f <= h; f++)
	{
		for (g = 1; g <= h; g++)
		{
			if (f == 1 || f == h || g == 1 || g == h) 
			{
				cout << "#";
			}
			else
			{
				cout << "*";
			}
		}
		cout << endl;
	}

	
}