#include <iostream>

using std::cout;
using std::endl;

int sum(int x,int y) 
{
	int result = 0;
	result = x + y;
	//cout << "Initial result is: " <<result<< endl;
	return result;
}


int main() {
	
	cout << "The Result is: " << sum(20, 30) << endl;
	
	int multiply{ 2 };
	int Fresult;
	int xx = sum(15, 40);
	Fresult = multiply * xx;
	cout << "Final result is: " << Fresult << endl;
	return 0;
}