#include <iostream>
using namespace std;

int main(){
    int n = 0,cnt = 0;

    while(n<=300){
       cout << "Enter a Number: \n";
       cin >> n;
       n = n*5;
       cnt++;
        cout <<"Result:" << n << endl;
        cout << "Time Calculated: " << cnt << endl;
      
    }
    cout << "Selected number is over the limit \n";
    
    return 0;
}