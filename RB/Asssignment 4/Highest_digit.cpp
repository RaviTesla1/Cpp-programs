#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num,mod,r=0;
    cout<<"Enter a number : "<<endl;
    cin>>num;
    while(num)
    {
        mod=num%10;
        num=num/10;
        r=r>mod?r:mod;
    }
    cout<<"Highest digit in a number is :"<<r;
    return 0;
}
