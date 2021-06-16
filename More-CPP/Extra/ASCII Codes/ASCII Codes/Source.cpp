#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {

	char a;
	cout << "\nPrintable ASCII:\n";
	for (char a = 32; a < 127; ++a)
	{
		cout << a << ' ';
		if (a % 16 == 15)
			cout << '\n';
	}

	int i = 1;

	while (i!=0) 
	{
		cout << "\n\nEnter a number From 33 to 127 to see its ASCII Value!" << endl;
		cout << "\nEnter 0 to Exit!" << endl;
		cin >> i;
		if (i >= 33 && i <=127)
		{
			cout << "\nASCII Value of " << i << " Is: " << (char)i;


		}
		else if(i==1 && i <= 32)
		{
			cout << "Not printable character";
		}
		
	}

	cout << "\nLoop Is Terminated";

	return 0;
}