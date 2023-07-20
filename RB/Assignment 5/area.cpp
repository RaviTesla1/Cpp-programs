//Waf to calculate area of circle.(TSRS)
#include<iostream>
#include<conio.h>
using namespace std;
float area(int r);
float area(int r)
{
    return 3.14*r*r;
}
int main()
{
    int radius;
    float x;
    cout<<"Enter value of radius:"<<endl;
    cin>>radius;
    x=area(radius);
    cout<<"Radius of circle is"<<x;
    getch();
    return 0;

}

