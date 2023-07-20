/*Define member functions to set data and show data. Also define functions to perform
various mathematical operations between two objects of complex. Following is the list
of operations:
a. addition  b. subtraction  c. multiplication*/
#include<iostream>
#include<conio.h>
using namespace std;
class complex
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
        complex operator+(complex x)
        {
            complex t;
            t.a=a+x.a;
            t.b=b+x.b;
            return t;

        }
         complex operator-(complex x)
        {
            complex t;
            t.a=a-x.a;
            t.b=b-x.b;
            return t;

        }
         complex operator*(complex x)
        {
            complex t;
            t.a=a*x.a;
            t.b=b*x.b;
            return t;

        }
};
int main()
{
    complex c1,c2,c3,c4,c5;
    c1.setdata(1,2);
    c2.setdata(3,4);
    c3=c1+c2;
    c4=c1-c2;
    c5=c1*c2;
    c1.showdata();
    c2.showdata();
    c3.showdata();
    c4.showdata();
    c5.showdata();
    getch();
    return 0;
}
