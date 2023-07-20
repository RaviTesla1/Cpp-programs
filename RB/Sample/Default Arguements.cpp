#include<iostream>
#include<conio.h>
using namespace std;
int add(int = 0,int = 0, int = 0);
int main()
{
    int a,b,c,d;
    d=add();
    cout<<d<<endl;
    a=add(1);
    cout<<a<<endl;
    b=add(2,3);
    cout<<b<<endl;
    c=add(3,4,5);
    cout<<c<<endl;
    getch();
    return 0;
}
int add(int x,int y, int z)
{
    return x+y+z;
}
