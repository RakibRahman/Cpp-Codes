#include <iostream>
using namespace std;
int main()
{
    int n;
    int count = 0;
    do{
        cout << "\nEnter a Number: \n";
        cin >> n;
        n=(n+n)/2;
        count++;
        cout << "Result: \n" << n <<endl;
        cout << "Count time: " << count;
    }while(n <= 300); //while(true);
    cout << "\n\nover the limit\n";

    return 0;
}