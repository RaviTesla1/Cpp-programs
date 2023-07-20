//Write a c++ program to calculate sum of squares of first N natural numbers;
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num,sum=0,i;
    cout<<"total no of numbers";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        sum=sum+i*i;
    }
    cout<<"Total sum is : "<<sum;
    getch();
    return 0;

}
