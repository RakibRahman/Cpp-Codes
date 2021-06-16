//String Tester
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	string word0 = "Game";
	string word1 = "Over";
	string word2 (3, '!');

	string name = ("Rakibur Rahman Talukder");
	cout << name<<endl;
	cout << "My name has " << name.size() << " letters!" << endl;

	string line = word0 + " " + word1 + word2;
	cout << "The phrase is: " << line << "\n\n";

	cout << "The line has " << line.size() << " letters in it" << endl;
	cout << "The first word of the line is: " << line[0] << endl;

	cout << "Changing the first word of the line.\n";
	line[0] = 'L';

	cout << "Now the first word of the line is: " << line[0];

	unsigned int i = 0;
	for (i; i < line.size(); i++) {
		cout << "\nCharacter at position " << i << " is: " << line[i] << endl;
	}
	for (int r = 0; r < name.size(); ++r) {
		cout << "Letter at position " << r << " Is: " << name[r] << endl;
	}
	cout << "\nThe sequence 'Over' begins at location " << line.find("Over") << endl;
	
	if (name.find("Labib") == string::npos) {
		cout << "\nLabib is not in the name!" << endl;
	}

	line.erase(4, 5);
	cout << "The phrase is now: " << line << "\n\n";
	line.erase(4);
	cout << "The phrase is now: " << line << "\n\n";
	line.erase();
	cout << "The phrase is now: " << line << "\n\n";

	if (line.empty()) {
		cout << "\nPhrase got erased!!!";
	}
		
	return 0;
}