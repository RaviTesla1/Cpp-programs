#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x,y,z=1;
    cout<<"Enter two numbers : "<<endl;
    cin>>x>>y;
    while(y)
    {
        z=x*z;
        y--;
    }
    cout<<z;
    return 0;
}
