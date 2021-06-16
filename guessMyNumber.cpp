#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    int hiddenNumber = rand() % 100 + 1; //random number between 1 to 100
    //cout << "You got: " << hiddenNumber ;

    int tries = 0;
    int guess;
    cout << "\tWelcome to GUESS MY NUMBER\n\n";
    do{
        cout << "Enter you guess number: ";
        cin >> guess;
        tries++;

        if (guess > hiddenNumber)
        {
            cout << "Too High!\n\n";
        }
        else if (guess < hiddenNumber)
        {
            cout << "Too Low!\n\n";
        }
        else
        {
            cout << "That's it! You got it in " << tries << " guesses!\n";
        }
     }while(guess != hiddenNumber);


    return 0;
}