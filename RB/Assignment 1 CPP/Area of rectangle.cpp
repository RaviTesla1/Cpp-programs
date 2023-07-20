#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
    int length,breadth,area;
    cout<<"Enter length and breadth: "<<endl;
    cin>>length>>breadth;
    area = length*breadth;
    cout<<"Area of rectangle is: " <<area;
    getch();
    return 0;
}
