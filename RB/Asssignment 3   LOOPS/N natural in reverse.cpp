///Write a cpp program to print first n natural numbers in reverse order.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num,i;
    cout<<"Enter no. of natural numbers"<<endl;
    cin>>num;
    cout<<endl;
    for(i=num;i>0;i--)
    {
        cout<<i<<endl;
    }
    getch();
    return 0;
}
