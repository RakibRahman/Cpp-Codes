#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    enum fieldS { WORD,HINT,NUM_FIELDS};

         const int NUM_WORDS = 5;
         const string WORDS[NUM_WORDS][NUM_FIELDS] = 
         {
             {"Pain", " This world shall know pain"},
            {"Naruto", " I'll never break my word"},
            {"Jiraiya", " Rejection is a part of any man's life"},
            {"Obito", " I don't feel pain, I don't feel anything!"},
            {"Itachi", " Every enemy always has a weakness"}
        };
        /*
        for(int n =0; n <= NUM_WORDS; n++){
            for(int m =0; m<NUM_FIELDS; m++){
                cout << WORDS[n][m];
            }
            cout << endl;
        }
        */
       srand(static_cast<unsigned int>(time(0)));
       int choice = (rand() % NUM_WORDS);
       string theWord = WORDS[choice][WORD]; //Word to guess
       string theHint = WORDS[choice][HINT]; //Hint for the word

       string shuffle = theWord;
       int length = shuffle.size();
       
       //Shuffling the word
       for(int i = 0; i < length; i++ )
       {
           int index1 = (rand() % length);
           int index2 = (rand() % length);
           char temp = shuffle[index1];
           shuffle[index1] = shuffle[index2];
           shuffle[index2] = temp;

       }
       cout << "\t\t Welcome to Word Shuffle!";
       cout << "\nUnscramble the letters to make a word.\n";
       cout << "Enter 'Hint' for a hint.\n";
       cout << "Enter 'Quit' to quit the game.\n";
       cout << "The Shuffle is: " << shuffle;
       
       string guess;
       cout << "\n\nEnter your guess: ";
       cin >> guess;

       //game loop
       while((guess != theWord) && (guess != "quit"))
       {
           if(guess == "hint"){
               cout << theHint;
           }
           else
           {
               cout << "Sorry! Wrong Guess";
           }

           cout << "\n\nYour Guess: ";
           cin >> guess;

     
}
if (guess == theWord)
    {
    cout << "\nThat's it! You guessed it!\n";
    }
    cout << "\nThanks for playing.\n";
    return 0;
                   
}