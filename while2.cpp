   #include <iostream>
   using namespace std;
   int main()
   {
       int number;
       int count = 0; 
                while (number > 1) 
                { 
                    cout << "\tEnter a Number: \n\n";
                    cin >> number;
                  number = number / 2; 
                  count++; // the same as count = count + 1; 
                  cout << " Result: " << number << "\n";
                  cout << "Count: " <<count << "\n";
                }
                cout << "\nWrong number to calculate!";
       return 0;
   }
   
   
   
   
   
   
   
   
               