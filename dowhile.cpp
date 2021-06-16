#include <iostream>
using namespace std;

int main()
{
    char replay;
    do
    {
        cout << "Sorry! Out of moves!\n";
        cout << "Do you want to play the level again?(Y/N)\n\n";
        cin >> replay;
    } while (replay=='y');

    cout << "\nNo,Exit the Game";

    return 0;
}