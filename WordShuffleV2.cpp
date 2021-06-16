 #include <iostream>
 #include <cstdlib>
 #include <string>
 #include <ctime>
using namespace std;
 int main()
 {
     enum options {TEXT,
                    INDICATION,
                    QUOTE
                    };
    const int names = 12;
    const string CLUES[names][QUOTE] = 
    {
     {"Kenshin", " Hitogiri Battosai"},
     {"Naruto", " The unpredictable Ninja"},
     {"Luffy", " Meat Meat & Meat!"},
     {"Ichigo", " Shinigami"},
    {"Kaneki", " Unravel"},
    {"Minato", " Yellow Flash"},
    {"Itachi", " Tatsuka Blade"},
    {"Pain", " Shinra Tensei"},
    {"Obito", " The Fallen Hero"},
    {"Kuroko", " Panthom Sixth"}

    };
 /*for(int n =0; n <names; n++){
            for(int m =0; m<QUOTE; m++){
                cout <<CLUES[n][m];
            }
            cout << endl;
        }
        */
       srand(static_cast<unsigned int>(time(0)));
       int choice = (rand() %  names);
       string theName = CLUES[choice][TEXT]; //to guess word
       string theHint =CLUES[choice][INDICATION]; //to provide player hint

       string shuffle = theName;
       int length = shuffle.size();
       int i =0;
       for(i; i<length; i++)
       {
           int sfl1 = (rand() %  length);
           int sfl2 = (rand() %  length);
           char temp = shuffle[sfl1];
           shuffle[sfl1] = shuffle[sfl2];
           shuffle[sfl2] = temp;

       }
       cout << "\t\t Welcome to Word Shuffle!";
       cout << "\nUnscramble the letters to make a word.\n";
       cout << "Enter 'H' for a hint.\n";
       cout << "Enter 'exit' to quit the game.\n";
       cout << "The Shuffle is: " <<shuffle;

        const unsigned int score = 6;
        unsigned int points = score * theName.size();

       string guess;
       cout << "\n\nEnter your Guess: ";
       cin >> guess;
       while((guess != theName) && (guess != "exit"))
       {
           if(guess == "H")
           {
               cout << theHint <<endl;
               points -= 6;
               cout << "For using HINT points will deducted!";

           }
           else{
               cout << "Sorry! Wrong Guess!!!";
           }
           cout << "\n\nYour Guess:";
           cin>>guess;
       }

       if (guess == theName)
    {
    cout << "\nThat's it! You guessed it!\n";
    cout << "\nYou Scored " << points << " points!";
    }
    cout << "\nThanks for playing.\n";
    return 0;
 }
