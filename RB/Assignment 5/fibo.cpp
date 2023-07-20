/*Write a function to print n terms of fibonacci series(TSRN).*/
#include<iostream>
#include<conio.h>
using namespace std;
void fibo(int terms)
{
    int i,a=-1,b=1,c,t;
    for(i=1;i<=terms;i++)
    {

        c=a+b;
        cout<<" "<<c<<endl;
        t=a;
        a=b;
        b=c;
    }
}
int main()
{
    int term;
    cout<<"Enter no. of terms of fibonacci series: ";
    cin>>term;
    fibo(term);
    getch();
    return 0;
}
