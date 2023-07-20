#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    if(num % 2)
        cout<<"ODD";
    else
        cout<<"EVEN";
    getch();
    return 0;
}
