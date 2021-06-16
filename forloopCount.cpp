#include <iostream>
using namespace std;

int main ()
{
    cout << "Counting Number Forward: \n";
    for(int i = 0; i<11; i++)
    {
        cout << i << endl;
    }
    cout << "Counting Number Backward: \n";
    for(int j = 10; j>=0; j--)
    {
        cout << j << endl;
    }
    cout << "\n\nCounting by 5: \n ";
    for(int i = 0; i <= 50; i+=5)
    {
        cout << i << endl;
    }
    cout << "\n\nCounting with null statement\n";
    int count = 0;
    for ( ; count < 10;)
    {
        cout << count << endl;
        count++;
    }
    //NESTED FOR LOOP
    cout << "\n\n Counting with Nested For Loop: \n";
    const int ROWS = 5;
    const int COLUMNS = 3;
    for(int i=0; i< ROWS; i++){
        for(int j = 0; j < COLUMNS; ++j){
            cout << i << "," << j << " ";
        }
        cout << endl;
//inner loop is executed in full for each iteration of the outer loop.
    }
    
    return 0; 
    }

