//Write a c++ program to count digits in a given number;
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num,count=0;
    cout<<"Enter a number: ";
    cin>>num;
    while(num)
    {
        num=num/10;
        count++;
    }
    cout<<"Number of Digits are: "<<count;
    getch();
    return 0;
}
