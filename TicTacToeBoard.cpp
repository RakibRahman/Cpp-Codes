//Tic Tac Toe Board
//Demonstrates multidimensional arrays
#include <iostream>
 using namespace std;

 int main()
 {
     const int ROWS=3,COLUMNS=3;
     char board[ROWS][COLUMNS] = {{'O', 'X', 'O'},
                                {' ','X','X'},
                                {'O','O','X'}};
    cout << "\nHere is the Tic-Tac-Tor Board: \n";
    for(int i =0; i < ROWS; ++i){
        for(int j =0; j < COLUMNS; ++j)
        {
            cout <<board[i][j];
        }
        cout << endl;
    }
    cout << "\nNow 'X' moves to the empty location!\n";
    board[1][0] = 'X';
    cout << "\nNow the Tic-Tac-Tor Board is: \n";
    for(int i =0; i < ROWS; ++i){
        for(int j =0; j < COLUMNS; ++j)
        {
            cout <<board[i][j];
        }
        cout << endl;
    }
    cout << "\nWinner is X!!!";
    return 0;
 }