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

};
int main()
{
    Complex c1;
    c1.showdata();
    getch();
    return 0;
}
