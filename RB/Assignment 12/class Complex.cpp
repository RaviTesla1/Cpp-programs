#include<iostream>
#include<conio.h>
using  namespace std;
class Complex
{
    private:
        int a,b;
    public:
        void setdata(int x,int y)
        {
            a=x;
            b=y;
        }
        void showdata()
        {
            cout<<"a = "<<a<<" b = "<<b<<endl;
        }
        Complex(int x,int y)
        {
            a=x;
            b=y;
        }
        Complex()
        {
            a=0;
            b=0;
        }
        Complex operator +(Complex c)
        {
            Complex temp;
            temp.a=a+c.a;
            temp.b=b+c.b;
            return temp;
        }
        Complex operator -(Complex c)
        {
            Complex temp;
            temp.a=a-c.a;
            temp.b=b-c.b;
            return temp;
        }
       Complex operator *(Complex c)
        {
            Complex temp;
            temp.a=a*c.a;
            temp.b=b*c.b;
            return temp;
        }
        int operator ==(Complex c)
        {
            if(a == c.a)
                return 1;
            return 0;
        }
};
int main()
{
    Complex c1,c2,c3,c4,c5,c6,c7,c8;
    int x;
    c1.setdata(988,2);
    c1.showdata();
    c2.setdata(1,2);
    c2.showdata();
    c3=c1+c2;
    c3.showdata();
    if( c1 == c2)
        cout<<"Equal"<<endl;
    else
        cout<<"Not Equal";
    getch();
    return 0;
}



