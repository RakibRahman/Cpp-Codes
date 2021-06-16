#include <iostream>
#include <ctime> //To seed the random number generator with the current time.
#include <cstdlib> //Contains functions that deal with generating random numbers.

using std::cout;
using std::endl;
using std::cin;

int main()
{
    cout << "\tWelcome To Guess My Number\n\n";

    srand(static_cast<unsigned int>(time(0))); //seeds random number generator

    int guess,number,tries=0;

    cout << " Enter a number (1-100) :";
    cin >> number;

    do{
        guess = rand() % 100 + 1;  //random number between 1 to 100
        cout << "Computer Guess :\n";
        cout << guess << "\n";
        tries++;

        if(guess > number)
        {
            cout << "Too High Number\n";
        }
       else if(guess < number )
        {
            cout << "Too Low Number\n";
        }
        else
        {
            cout << "\tThat's it! You got it in " << tries << " guesses!\n";
        }
        
    }while(guess != number);

return 0;    
}
