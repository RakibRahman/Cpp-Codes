//Demonstrates string object

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word1 = "Game";
    string word2 ("Over");
    string word3 (3, '!');

    string diag = word1 + " " +word2+word3;
    cout << "\nThe Phrase is: " << diag << "\n\n" ;

    cout << "The Phrase has " << diag.size() << " characters in it.\n\n";
    cout << "The character at position 0 is: " << diag[0] << "\n\n";
    
    cout << "Changing the character position at 0.\n ";
    diag[0] = 'L'; //indexing begins at position 0.
    cout << "\The Phrase is now: " << diag << "\n\n" ;

    //cout << diag.length(); 

    for(unsigned int i =0; i<diag.size(); i++)
    {
        cout << "The character at position " << i << " is: " << diag[i] <<endl;
    }
    cout << "\nThe sequence 'Over' begins at location " << diag.find("Over") << endl;

    if(diag.find("PLAY") == string::npos)
    {
        cout << "\nThe word 'PLAY' is not in the phrase.\n\n";
    }
    //string::npos represents the largest possible size of a string object.
   
   diag.erase(4, 5);
   cout << "\The Phrase is now: " << diag << "\n\n" ;

   diag.erase(4);
   cout << "\The Phrase is now: " << diag << "\n\n" ;

   diag.erase();
   cout << "\The Phrase is now: " << diag << "\n\n" ;

   if(diag.empty())
   {
       cout << "The Phrase is Empty!";
   }
   
    return 0;
}
