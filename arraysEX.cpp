#include <iostream>
#include <string>

using namespace std;
int main()
{
    const int EP_LIST = 5;
    string eplist[EP_LIST] = {"KZ ZS5","QCZ CK1","Uiisii T8s","Bludio T2+"};
    for(int i=0; i<EP_LIST; i++)
    {
        cout << i << "-" << eplist[i] <<endl;
    }
    eplist[4]="Xundd X001";
    for(int i=0; i<EP_LIST; i++)
    {
        cout << i << "-" << eplist[i] <<endl;
    }
   //cout << eplist[2].size();

    int ID[] = {10,20,10,2,8};
    //cout << "\n"<< ID[0];
    int n;
    for(n=0; n<5; n++)
    {
        cout<<ID[n] <<endl; //prints values of ID
    }
   int roll[10]={49,50,69,79,151};
   int f,result=0;
   for(f=0; f<5; ++f)
   {
       int a =roll[f];
       cout << "Roll:";
       cout << a << endl;
       //cout <<"\n\n";
       result += 10*a;
       cout << a << endl;
   }




   
    return 0;
}