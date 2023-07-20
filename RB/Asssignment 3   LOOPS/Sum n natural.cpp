//Write a c++ program to calculate sum of first N natural numbers;
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,n,sum=0;
    cout<<"Enter total no. of numbers: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum = sum +i;
    }
    cout<<"total sum is: "<<sum;
    getch();
    return 0;
}
