#include <iostream>
using std::cout;
using std::endl;

int main() {
	enum seasons {summer=14,spring=25,winter=21,autumn=9};
	seasons w = summer;
	cout << "Winter = " << w << endl;

	//An enum variable takes only one value out of many possible values.
	cout << "\n\n";

	enum suit {
		club = 0,
		diamond = 4,
		ace = 6,
		joker = 8,
		spades = 3
	} card;
	
	card = club;
	cout << "Size of ENUM variable: " << sizeof(card) << " Bytes" << endl;

	return 0;
}
