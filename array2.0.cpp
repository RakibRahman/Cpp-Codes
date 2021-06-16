#include <iostream>
#include <string>

using namespace std;
int main()
{
    const int max = 15;
    string names[max];
    int namelst = 0;

    names[namelst++] = "Pain"; 
    names[namelst++] = "Obito"; 
    names[namelst++] = "Minato"; 
    names[namelst++] = "Itachi";
    names[namelst++] = "Jiraiya"; 
    names[namelst++] = "Kakashi"; 
    names[namelst++] = "Naruto"; 
    names[namelst++] = "Sasori";

    cout << " Favourite Characters from Naruto:\n";
    for(int p=0; p<namelst; p++){
        cout << p<< " --> " << names[p] <<endl;
    }

   cout << "First name in 'names' Array is: " << names[0] <<endl;

   if(namelst<max)
   {
       names[namelst++] = "Conan"; 
       names[namelst++] = "Kushina"; 
       names[namelst++] = "Rin"; 
   }
   cout << "Favourite character with female:\n";
    for(int p=0; p<namelst; p++){
        cout << p<< " --> " << names[p] <<endl;
    }
    int numbers[6]; 
    int sum = 0;
    int n,i;
    cout << "Enter Numbers: \n";
    for(n=0; n<6; n++)
    {
        cout << "Enter Number " << n+1 << " : ";
        cin >> numbers[n];
        sum += numbers[n];
    }
    cout << "Sum Of Numbers: " << sum <<endl;
    //Loop to store largest number to arr[0] ex: {numbers[0])}
    for(i=1; i<n; i++)
    {
        if(numbers[0] < numbers[i])
        {
            numbers[0] = numbers[i];
        }
        
    }
    cout << "Largest Number is: " << numbers[0];
 

    return 0; 
}