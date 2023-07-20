//Write a c++ program to calculate factorial of a number;
#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,num;
    cout<<"Enter number";
    cin>>num;
    for(i=1;i<=num;i++)
    {
       num = num*i;
    }
    cout<<"Factorial of a number is: "<<num;
    getch();
    return 0;
}

