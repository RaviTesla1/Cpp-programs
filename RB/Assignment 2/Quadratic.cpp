#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"Enter value of a,b and c:";
    cin>>a>>b>>c;
    d = b*b - 4*a*c;
    if(d == 0)
        cout<<"two equal real roots";
    if(d>0)
        cout<<"two distinct real roots";
    if(d<0)
        cout<<"no real roots";
    getch();
    return 0;
}

