#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int year;
    cout<<"Enter year: "<<endl;
    cin>>year;
    if(year % 100)
        if(year % 4)
           cout<<"not leap year";
        else
            cout<<"leap year";
    else
        if(year % 400)
            cout<<"not leap year";
        else
            cout<<"leap year";
        getch();
        return 0;
}
