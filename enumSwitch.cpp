#include <iostream>
using namespace std;

int main()
{
    cout << "\tChoose Your Desied Difficulty\n\n";
    cout << "1- NOVICE\n";
    cout << "2- EASY\n";
    cout << "3- NORMAL\n";
    cout << "4- HARD\n";

    enum difficulty{NOVICE=1,EASY=2,NORMAL=3,HARD=4};
    int myDifficulty;
    cout << "Your Play Mode: \n";
    cin >> myDifficulty;

    switch(difficulty(myDifficulty))
    {
    case 1:
                cout << "You picked NOVICE.\n";
                break;
        case 2:
                cout << "You picked EASY.\n";
                break;
        case 3: 
                cout << "You picked NORMAL.\n";
                break;
        case 4:
                cout << "You picked HARD\n";
                break;
        default:
                cout << " You made an illegal Choice.\n";
    }

 return 0;

}