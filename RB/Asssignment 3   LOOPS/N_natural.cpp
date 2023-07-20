//Write a c++ program to print first n natural numbers.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num,i;
    cout<<"Enter number of natural numbers"<<endl;
    cin>>num;
    for(i=1;i<=num;i++)
     {
        cout<<i<<endl;
     }
    getch();
    return 0;
}
