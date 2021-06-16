#include <iostream>
#include <cstring>

using std::cout;
using std::endl;
//A class is collection of related data and function under a single name.
class Books {
public: //Acess Specifier
	int Id{ 256 };
	void printBookID() // a function
	{
		cout << "ID of the book is: " << Id << endl;
	}
};

int main() {
	Books book1; //An Object is an instance of a Class. Ex: book1
	book1.printBookID();
	cout << book1.Id << endl;

}