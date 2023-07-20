#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    int h,b,p,sum;
    cout<<"Enter value of h,b and p: ";
    cin>>h>>b>>p;
    h=h*h;
    b=b*b;
    p=p*p;
    sum=b+p;
    if(h == sum)
        cout<<"triangle is right angled";
    else
        cout<<"Not right angled triangle";
    getch();
}
