//Write a c++ program to print table of user's choice;
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num,i,res;
    cout<<"Enter table of : ";
    cin>>num;
    for(i=1;i<=10;i++)
    {
        res=num*i;
        cout<<num<<" * "<<i<<" = "<<res<<endl;
    }
    getch();
    return 0;
}
