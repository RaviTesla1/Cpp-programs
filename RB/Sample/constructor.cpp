#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
private:
    int a,b;
public:
    complex()
    {
        cout<<"Hello";
    }
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
};
int main()
{
    complex c1,c2,c3;
    getch();
    return 0;
}
