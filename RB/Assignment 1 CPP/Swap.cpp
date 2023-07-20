#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    int x,y,temp;
    cout<<"Enter two numbers: ";
    cin>>x>>y;
    cout<<endl<<"x = "<<x<<" and y = "<<y;
    temp = x;
    x = y;
    y =temp;
    cout<<endl<<"x = "<<x<<" and y = "<<y;
    getch();
    return 0;
}
