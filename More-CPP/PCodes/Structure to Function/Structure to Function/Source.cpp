#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

struct Games
{
	char name[50];
	char developer[50];
	int partNo;
};

void fnc(Games game) {
	cout << "Gamez name: " << game.name << endl;
	cout << "Gamez Developer: " << game.developer << endl;
	cout << "Gamez part number: " << game.partNo << endl;
}
//struct Rectangle
//{
//	int width, height;
//};

int main()
{
	struct Games game1;

	strcpy_s(game1.name, "Witcher 3");
	strcpy_s(game1.developer, "CD Red");

	game1.partNo = 3;

	fnc(game1);
	cout << endl;
	cout << "Game name: " << game1.name << endl;
	cout << "Game Developer: " << game1.developer << endl;
	cout << "Game part number: " << game1.partNo << endl;

	/*struct Rectangle rec;
	rec.height = 65;
	rec.width = 45;
	cout << "Rectangle of the area is: " << (rec.width * rec.height) << endl;

	int x{};
	int y{};
	x = rec.height;

	y = rec.width;
	cout << "Rectangle of the area is: " << (x * y) << endl;*/

	return 0;
}