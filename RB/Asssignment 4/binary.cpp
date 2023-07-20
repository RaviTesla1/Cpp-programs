#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
 int num,m,r=0,pum;
    cout<<"Enter a number"<<endl;
    cin>>num;
    pum =num+0;
    while(num)
    {
        m=num%2;
        num=num/2;
        r=m+r*10;
    }
    cout<<"R is : "<<r<<endl;
    int m1,r1=0;
   while(r)
   {
    m1=r%10;
     r=r/10;
     r1=m1+r1*10;
   }
   cout<<"Binary of" <<pum<<" is : "<<r1;
    return 0;
}
