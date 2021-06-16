#include <iostream>
using namespace std;
int main()
{
    cout << "Difficulty Levels\n\n";
    cout << "1- EASY\n";
    cout << "2- Normal\n";
    cout << "3- HARD\n\n";

    int choice;
    cout << "Choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
                cout << "You picked Easy.\n";
                break;
        case 2:
                cout << "You picked Normal.\n";
                break;
        case 3: 
                cout << "You picked Hard.\n";
                break;
        default:
                cout << " You made an illegal Choice.\n";

    }

    cout << "Your Favourite Game Series:\n\n";
    cout << "1- The Witcher\n";
    cout << "2- Assassin's Creed\n";
    cout << "3- Prince Of Persia\n\n";
    cout << "4- Tomb Raider\n";
    cout << "5- Call of Duty\n";
    cout << "6- Far Cry\n";

    int favGame;
    cout << "Chose your Favourite Series: ";
    cin >> favGame;

     switch(favGame)
    {
        case 1:
                cout << "You picked Witcher Series.\n";
                break;
        case 2:
                cout << "You picked AC Series.\n";
                break;
        case 3: 
                cout << "You picked POP Series.\n";
                break;
        case 4:
                cout << "You Picked TR Series.\n";
                break;
        case 5:
                cout << "You picked COD Series.\n";
                break;
        case 6:
                cout << "You picked FC Series.\n";
        default:
                cout << " You made an illegal Choice.\n";

    }


    return 0;

} 
