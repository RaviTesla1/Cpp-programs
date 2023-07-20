#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number";
    cin>>n;
    if(n<0)
      cout<<"Negative";
    if(n==0)
        cout<<"Zero";
    if(n>0)
        cout<<"Positive";
    getch();
    return 0;
}
