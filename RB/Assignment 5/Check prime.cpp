/*Write a function to check whether a given number is prime or not
.Return 1 if number is prime ,otherwise return 0.(TSRS)*/
#include<iostream>
#include<conio.h>
using namespace std;
int check(int x)
{
    int i;
    for(i=2;i<=x-1;i++)
    {
        if(x%i == 0)
            break;
    }
    if(i == x)
        return 1;
    return 0;
}
int main()
{
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    if(check(num))
        cout<<"prime";
    else
        cout<<"Not prime";
    getch();
    return 0;
}
