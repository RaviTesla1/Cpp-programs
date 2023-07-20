#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
    int length,breadth,height;
    cout<<"Enter paramters of cuboid"<<endl;
    cin>>length>>breadth>>height;
    int volume=length*breadth*height;
    cout<<endl<<"volume is: "<<volume;
    getch();
    return 0;
}
