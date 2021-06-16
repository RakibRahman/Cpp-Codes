//Lost Fortune
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {
	int const DIAMOND_PIECES = 90;
	int explorers, dead, survivors;
	string leader,location;

	//Getting Information
	cout << "Welcome to Lost Fortune\n\n" << endl;
	cout << "Enter the following to start your personalized exploration:" << endl;

	cout << "Explorer Numbers: ";
	cin >> explorers;

	cout << "Explorer Dead: ";
	cin >> dead;

	survivors = explorers - dead;
	//cout << "Explorer Survived: " << survivors << endl;

	cout << "Team Leader Name: ";
	cin >> leader;

	cout << "Tomb Location ";
	cin >> location;

	//Story
	cout << "\nA brave group of " << explorers << " explorers set out on a big exploration" << endl;
	cout << "--Their quest is to discover one of the ancient tomb located on " << location << " which is in the middle of amazon forest";
	cout << "\nThe leader of the group is the legendary tomb raider named " << leader << "." << endl;
	cout << "On the way to the unseen tomb ,the pack was attacked by some various man eater animals" << endl;
	cout << "\nOut of " << explorers << " explorers " << dead << " were dead!" << endl;
	cout << "As their jouney continued,only " << survivors << " explorers survived" << endl;
	cout << "After overcoming much hurdle,they finally reached the tomb!" << endl;
	cout << leader << " found the secret treasure room of the tomb which was full of big diamonds." << endl;
	cout << "So, " << leader << " splits the " << DIAMOND_PIECES << " diamonds among the explorers." << endl;
	cout << leader << " held on to the extra " << (DIAMOND_PIECES % survivors);
	cout << " pieces to keep things fair of course.\n" << endl;
	return 0;


}
