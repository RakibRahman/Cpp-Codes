//generating random number
#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::endl;

int main()
{
    srand(static_cast<unsigned int>(time(0))); //seeds random number generator. 
    int randomNumber = rand(); //Generate Random Number
    int die = (randomNumber % 6) + 1; //get a number between 1 & 6
    cout << "You rolled a " << die << endl;
    //cout << RAND_MAX; // max number of rand function

    return 0;
}