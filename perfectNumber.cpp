//find Perfect Number

/*6 is Perfect Number since divisor of 6 are 1, 2 and 3. Sum of its divisor is
1 + 2+ 3 =6 
*/

#include <iostream> 
#include <cctype> //declares a set of functions to classify & transform individual characters.
using namespace std; 

int main(){
    int n,i=1,sum=0;
    cout << "Enter a number: ";
    cin >> n;
       while(i<n){
       if(n%i==0)
       sum=sum+i;
       i++; 
}
 
if(sum==n)
{
    cout << i << " is a perfect number\n";
}
else
{
    cout << i << " is not a perfect number\n";
}
    

return 0;
}