//Game Designer Network
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string playerid;
    string password;
    bool success;
    cout << "\tGame Designer's Network\n";
    cout << "\tPlease Enter your ID & Password to continue!";
    do{
        cout << "\nPlayer ID: ";
        cin >> playerid;

        cout << "\nPassword: ";
        cin >> password;

        if(playerid=="painrakib" && password=="nagatouzumaki")
        {
            cout << "\nWelcome Rakib Rahman"
                    << "\nThis World Shall Know Pain";
            success = true;
        }
        else if(playerid=="ashshuvo" && password=="islamshuvo")
        {
            cout << "\nWelcome Ashraful Islam"
                    << "\nKeep Working Hard";
            success = true;
        }
        else if(playerid=="ssas" && password=="sassabbir")
        {
            cout << "\nWelcome Shah Sabbir"
                    << "\nHappy Coding!";
            success = true;
        }
        else if(playerid=="guest" && password=="guest")
        {
            cout << "\nWelcome Guest"
                    <<"\nEnjoy your Visit";
            success=true;
        }
        else
        {
            cout << "You dont have any valid ID";
            success=true;
        }
        
        
    }while (!success);

    return 0;


}