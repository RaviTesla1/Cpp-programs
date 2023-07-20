/* 6.Write a function to find a factorial of a given number.(TSRS)*/
#include<iostream>
#include<conio.h>
using namespace std;
int fact(int num);
int fact(int num)
{
    int i,fact=1;
    for(i=1;i<=num;i++)
    {
        fact= fact * i;
    }
    return fact;
}
int main()
{
    int num,x;
    cout<<"Enter num"<<endl;
    cin>>num;
    x=fact(num);
    cout<<"Factorial of a number is: "<<x;
    getch();
    return 0;
}
