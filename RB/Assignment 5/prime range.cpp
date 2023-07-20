/*5. Write a function to print all prime numbers between two  given numbers.(tsrs)*/
#include<iostream>
#include<conio.h>
using namespace std;
void print(int l,int h);
void print(int l,int h)
{
    int x,i;
    for(x=l+1;x<=h-1;x++)
    {
        for(i=2;i<x;i++)
        {
         if(x%i == 0)
            break;
        }
        if(i == x)
            cout<<x<<" ";

    }
}
int main()
{
    int l,h;
    cout<<"Enter value of l and h"<<endl;
    cin>>l>>h;
    cout<<"prime numbers are:";
    print(l,h);
    getch();
    return 0;
}
