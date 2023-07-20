#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Enter value of three numbers"<<endl;
    cin>>x>>y>>z;
    int sum = x+y+z;
    double average = sum/3.0;
    cout<<"Average of three numbers is: "<<average;
    getch();
    return 0;
}
