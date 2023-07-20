#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num,mod,

    res=0;
    cout<<"Enter a number : "<<endl;
    cin>>num;
    while(num)
    {
        mod=num%10;
        res=mod+10*res;
        num=num/10;
    }
    cout<<"Reverse of number is : "<<res<<endl;
    return 0;
}
