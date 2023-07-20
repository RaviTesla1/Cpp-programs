//Write a cpp program to calculate sum of digits in a given number
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num,mod,sum=0;
    cout<<"Enter a number:  ";
    cin>>num;
    while(num)
    {
        mod = num %10;
        sum = sum + mod;
        num = num/10;
    }
    cout<<"Sum is: "<<sum;
    getch();
    return 0;
}
