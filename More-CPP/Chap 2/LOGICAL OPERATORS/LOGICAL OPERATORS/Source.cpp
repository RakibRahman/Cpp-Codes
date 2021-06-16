//Designers Network
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	string username, password;
	bool success;
	cout << "\t\t\t Game Designer's Network\n";
	do {
		cout << "Enter User Name: ";
		cin >> username;
		cout << "\Enter Password: ";
		cin >> password;

		if (username == "Rakib" && password == "rakib796") {
			cout << "Welcome Rakib";
			success = true;
		}
		else if (username == "Zakir" && password == "zakir21") {
			cout << "Welcome Zakir";
			success = true;
		}
		else if (username == "Zakir" && password == "zakir21") {
			cout << "Welcome Zakir";
			success = true;
		}
		else if (username == "guest" || password == "guest") {
			cout << "Welcome Guest";
			success = true;
		}
		else {
			cout << "\nLog In Failed!!!";
			success = false;
		}

	} while (!success);

	return 0;
}
	