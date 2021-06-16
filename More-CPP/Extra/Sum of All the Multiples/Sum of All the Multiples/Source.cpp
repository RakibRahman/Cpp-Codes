//Find the sum of all the multiples of 3 or 5 below 1000.
#include <iostream>
using std::cout;
using std::endl;

int main() {

	int s;
	int sum{ 0 };
	for (s = 1; s < 1000; s++)
	{
		if (s % 3 == 0 || s % 5 == 0) // s %3 ==0 means numbers are multiple of 3,similiarly s%5===0 means numbers are multiple of 5
		{
			cout << s<<' ';
			sum += s;
		}
		
	}
	cout <<"\nSum of all the multiples of 3 or 5 below 1000 is: " <<sum;
}