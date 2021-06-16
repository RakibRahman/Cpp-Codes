#include <iostream>
using namespace std;

int main()
{
if (true)
{
    cout << "Player score is always displayed\n";
}
if(false)
{
     cout << "Player score is never displayed\n";
}
int score = 786;
if (score)
{
     cout << "Player score is not zero\n";
}
if(score<=800)
{
     cout << "Player score is greater than 700\n";
}
if(score>=600)
{
     cout << "Player score is always greater than 600\n";
}
int highScore = 1000;
if(highScore>=500)
{
    cout << "Player score is 500 or More\n";
    if(highScore>=1000)
    {
         cout << "Player score 1000!!!\n";

    } 

}
 int high = 500;
 if(high==600)
 {
      cout << "Score is 600\n";
 }
 else
 {
      cout << "Score is 500\n";
 }
 
 return 0;


}