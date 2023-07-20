#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
    int p,r,t,product;
    cout<<"Enter value of p,r,t: ";
    cin>>p>>r>>t;
    product = p*r*t;
    float si = product/100.0;
    cout<<endl<<"Simple Interest is : "<<si;
    getch();
    return 0;
}
