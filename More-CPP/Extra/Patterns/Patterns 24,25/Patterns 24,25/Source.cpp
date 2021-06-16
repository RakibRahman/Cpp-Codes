#include <iostream>

using std::cout;
using std::endl;

int main() {
	int n = 10; //size
	int i,j,k;

	cout << "Pattern 24:" << endl;
	for (i = 1; i <= n; i++) //outer loop will run upto n times
	{
		for (j = n - 1; j >= i; j--) //Space loop. outer loop -1 is space loop. if outer loop is 5 times than space loop is 5-1 = 4 times.
		{
			cout << " ";//whitespace
		}
		for (k = 1; k <= i; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << "\nPattern 25:" << endl;
	//Pyramid Pattern
	for(i=1;i<=n;i++)
	{
		for (j = n - 1; j >= i; j--)
		{
			cout << " ";
		}
		for (k = 1; k <= i; k++)
		{
			cout << "* "; //whitespace after *
		}
		cout << endl;
	}
	return 0;
}