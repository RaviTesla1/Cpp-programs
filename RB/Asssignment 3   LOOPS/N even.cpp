//Write a c++ program to print n even natural numbers;
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num,i;
    cout<<"Enter a number: ";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        cout<<i*2<<endl;
    }
    getch();
    return 0;
}
