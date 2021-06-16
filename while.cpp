#include <iostream>
using namespace std;

int main()
{
    char repeat = 'Y';
    while(repeat=='Y')
    {
        cout << "Sorry! Out of moves!\n";
        cout << "Do you want to play the level again?(Y/N)\n\n";
        cin >> repeat;

    }

    cout << "\nNo,Exit the Game!";

    return 0;
    
    
}