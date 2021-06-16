#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    const int DIAMOND_PIECES = 777;
    int explorers,survived,killed,bandits,deadBandits,banditsFlee;
    string leader;

    //Getting Informations

    cout << "Welcome to LOST FORTUNE\n\n" <<endl;
    cout << "Please enter following information to proceed\n";

    cout <<"Enter numbers of EXPLORER";
    cin >> explorers;

     cout <<"Enter numbers of Dead Explorers";
     cin >> killed;

     cout <<"Numbers of BANDITS";
     cin >> bandits;

     cout << "Bandits Killed";
     cin >> deadBandits;

     cout << "Numbers of Bandits flew Run away";
     cin >> banditsFlee;

     survived = explorers-killed;
     

     cout << "Enter your name: " ;
     cin >> leader;

     //Telling the Story

     cout << "\nA brave group of " << explorers << " set out on a quest ";
     cout << "--in the search of hidden treasure on a ancient tomb that was built 900 years ago. ";
     cout << "The group was led by a legendary tomb raider named " << leader;
     cout << "\nOn their way to the tomb,they were suddenly ambushed by the" << bandits << " bandits. ";
     cout << "The group was full of expert fighters and their leader " << leader << "was brave to fight the bandits face to face.";
     cout << "\nThe fight ended with the defeat of the bandits but there was heavy causazality.";
    
     cout << "\nExplorers killed: " << killed; 
     cout << "\n Bandits killed: " << deadBandits;
     cout << "\n Bandits Run Away: " << banditsFlee;

     cout << "\nThe group was only left with " << survived << " Members!";
     cout << "The group was devastated and about to give up all hope.";
     cout << "\nBut " << leader << " was to ready to lose all hope,so " << leader << " encouraged everyone to go ahead.";
     cout << "\nTo Cross the reckless River";
     cout << "\nTo Climb The deep forrest";
     cout << "\n After a hard fought journey ,they found the ancient tomb.";
     cout << "The explorers found " << DIAMOND_PIECES << " pieces of rare Diamond.\n";
     cout << leader << " held on the extra pieces " << (DIAMOND_PIECES%survived) ;
     cout << " To Keep things fair of course!!!\n";

     return 0;









}
