#include <iostream>
using namespace std;

int main()
{
    int count =0;
    //while(true)
    do{
        count +=1;

        //loop will be ended if count is greater than 20

        if(count>20)
        {
            break;
        }
        //skip the number 5
        if(count==6)
        {
            continue;
        }
        //skip number 17
        if(count==18)
        {
            continue;
        }
        cout << count << endl;
    }while(true);
    return 0;
}