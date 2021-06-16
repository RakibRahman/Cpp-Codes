#include <iostream>
#include <string>
using namespace std;

int main()
{
/*
int score;
string playerName;
cout << "Enter your Name: \n";
cin >> playerName;
cout << "Enter your Score: \n";
cin >> score;

if(playerName=="Rakib")
{
    cout <<"Welcome Rakib\n";
}
else
{
    cout << "Wrong Player!!!";
}
*/
 int scr;
 cout << "What is your score?\n ";
 cin >> scr;
 if(scr>=1000)
 {
     cout << "You Scored 1000+ points\n";
 }
 else if (scr>=500)
 {
    cout << "You Scored 500+ points\n";
 }
 else if (scr==300)
 {
     cout << "You Scored 300+ points\n";
 }
 else
 {
     cout << "You scored less than 250\n";
 }
  return 0;
 
 
 


}