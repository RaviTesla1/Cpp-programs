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
        Complex operator -()
        {
            Complex temp;
            temp.a=-a;
            temp.b=-b;
            return temp;
        }
        Complex operator ++()
        {
            Complex temp;
            temp.a = ++a;
            temp.b = ++b;
            return temp;
        }
        Complex operator ++(int)
        {
            Complex temp;
            temp.a = a++;
            temp.b = b++;
            return temp;
        }


};
int main()
{
    Complex c1,c2,c3,c4,c5,c6,c7,c8;
    int x;
    c1.setdata(1,2);
    c5.setdata(9,10);
    c1.showdata();

     c3 = ++c1;

    cout<<"c3 : ";
    c3.showdata();

    c4 = c5++;
cout<<"c4 : ";
    c4.showdata();
    getch();
    return 0;
}



