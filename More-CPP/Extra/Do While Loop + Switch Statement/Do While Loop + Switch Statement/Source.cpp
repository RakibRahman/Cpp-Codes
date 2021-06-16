#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
	int cc;

	do {
		cout << "\n\tCountry capital & It's Currency: ";
		cout << "\nBangladesh:" << " Press [1]";
		cout << "\nUSA:" << " Press [2]";
		cout << "\nSaudi Arabia:" << " Press [3]";
		cout <<"\nSouth Korea:" << " Press [4]";
		cout <<"\nJapan:"<< "Press [5]";
		cout << "\n\nEnter 6 to exit!!! ";

		cout << "\n\nEnter a number to show information!: " << endl;
		cin >>cc;

		switch (cc) 
			{
			case 1: 
				cout << "Capital: Dhaka" << endl;
				cout << "Currency: Taka";
				break;
			case 2:
				cout << "Capital: Washington, D.C." << endl;
				cout << "Currency: Dollar";
				break;
			case 3:
				cout << "Capital: Riyadh" << endl;
				cout << "Currency: Saudi riyal";
				break;
			case 4:
				cout << "Capital: Seoul" << endl;
				cout << "Currency: South Korean won";
				break;
			case 5:
				cout << "Capital: Tokyo" << endl;
				cout << "Currency: Japanese Yen";
				break;
			case 6:
				cout << "\nThank You!" << endl;
				break;

			default:
					cout << "Sorry!! not available in Database!";
					//break;		
		}

		} while (cc!=6);


		return 0;
}
