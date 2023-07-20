//Write a cpp program to print first n terms of fibonacci series.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,c,temp,a=-1,b=1;
    cout<<"Enter number of Fibonacci numbers"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        temp = a;
        a=b;
        b=c;
        cout<<c<<endl;
        getch();
        return 0;
    }
}
