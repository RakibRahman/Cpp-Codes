#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    int eo;
    int remainder;
    cout << "Enter a number to check if it is Even or Odd: \n";

    cin >> eo;
    remainder = eo % 2;

    if(remainder==0)
    {
        cout <<"The number " << eo << " is Even.";
    }
    else
    {
        cout <<"The number " << eo << " is Odd.";
    }
    return 0;
}