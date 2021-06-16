// Multi-dimensional Arrays
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	int tdArray[3][3] = { {2,5,6},{6,1,9},{7,9,6} };   //declaration of 2D array,,3 rows 3 columns
	// 2 5 6
	// 6 1 9

	cout << tdArray[0][2] << endl; //print element of first row 3rd column
	cout << tdArray[1][1];

	cout << "\nElements of Array:" << endl;
	for (int row = 0; row < 3; row++) 
	{
		for (int column= 0; column < 3; column++)
		{
			//cout << "Row[" << row << "]" << "Column[" << column<< "]";
			cout << tdArray[row][column] << " ";
		}
		cout << endl; //new line at each row   
	}
}