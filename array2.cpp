#include <iostream>

using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=0;
    int m;
    cout <<"elements of Arr array:\n";
    for(n; n<10; n++)
    {
        cout << "At Position- "<< n << "-->" << arr[n]<<endl;
        
        
    }
    int x=0;
    cout << "\nMultiplying elements of arr by 10:\n";
    for(x; x<10; x++){
         m = arr[x];
         m =m*10;
         cout << "Result: " << m << endl;  

        }
    return 0;
}