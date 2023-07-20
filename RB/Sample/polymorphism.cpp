#include<iostream>
#include<conio.h>
using namespace std;
void area(double);
void area(float b);
int main()
{
    char x = 'A';
    area(x);
    getch();
    return 0;
}
void area(double b)
{
    cout<<"area is "<<3.14*b*b;
}
void area(float b)
{
    cout<<"area is "<<3.14*b*b;
}
