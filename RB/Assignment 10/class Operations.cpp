#include<iostream>
#include<conio.h>
using namespace std;
class operations
{
    private:

        static float pi ;
    public:
        void area(int r)
        {
            float are;
            are= pi*r*r;
            cout<<"area of circle is : "<<are<<endl;
        }
        void area(int l,int b)
        {
            int are;
            are= l*b;
            cout<<"Area of rectangle is :"<<are;
        }

};
float operations:: pi =3.14;
int main()
{
    operations c,r;
    c.area(5);
    r.area(2,3);
    getch();
    return 0;

}
