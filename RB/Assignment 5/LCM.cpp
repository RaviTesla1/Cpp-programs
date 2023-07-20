/*Write a function to calculate LCM of two numbers(TSRS).*/
#include<iostream>
#include<conio.h>
using namespace std;
void lcm(int a,int b);
void lcm(int a,int b)
{
    int i,maxi;
    maxi=a>b?a:b;
    for(i=maxi;i<=a*b;i++)
    {
        if(a %i == 0 && b % i == 0)
            cout<<"LCM is "<<i;
    }
}
int main()
{
    int n,m;
    cout<<"Enter two numbers:";
    cin>>n>>m;
    lcm(n,m);
    getch();
    return 0;
}
