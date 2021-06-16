//Demonstrates Array
//Hero's Inventory

#include <iostream>
#include <string>

using namespace std;
int main()
{
    const int MAX_ITEMS = 10;
    string inventory[MAX_ITEMS];

    int numItems= 0;
    inventory[numItems++] = "SilverSword";
    inventory[numItems++] = "SteelSword";
    inventory[numItems++] = "Shield";
    //string inventory[MAX_ITEMS] = {"SilverSword", "SteelSword", "shield"};

    cout << "Your Items: \n";
    for(int i =0; i<numItems; i++)
    {
        cout << i << " " <<  inventory[i] << endl;
    }
    cout << "\nExchange Steel Sword For Spear\n";
    inventory[1] = "Spear";
    cout << "\nUpdated Inventory Items:\n ";
    for(int x = 0; x<numItems; x++)
    {
        cout << x << " " <<  inventory[x] << endl;

    } 
    cout << "The Item " << inventory[0] << " has " << inventory[0].size() << " Characters in it./n";
    cout << "\nADD a healing potion";
    if(numItems<MAX_ITEMS)
    {
        inventory[numItems++] = "HealPotion"; 
    }
    else
    {
        cout << "You are out of space";
    }
    cout << "\nNew Inventory Items List:\n";
    for(int r =0; r<numItems; r++)
    {
        cout << r << " " <<  inventory[r] << endl;
    }
    
    string word1 = "Game";
char word2[] = " Over";
string phrase = word1 + word2;
if (word1 != word2)
{
cout << "word1 and word2 are not equal.\n";
}
if (phrase.find(word2) != string::npos)
{
cout << "word2 is contained in phrase.\n";
}


    return 0;

}
