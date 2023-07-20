#include<iostream>
#include<conio.h>
using namespace std;
class time
{
    private:
      int a,b,c;
    public:
        void setdata(int x,int y,int z)
        {
            a=x;
            b=y;
            c=z;
        }
        void display()
        {
            cout<<a<<"hr "<<b<<"min "<<c<<"sec";
        }
};
int main()
{
    time t;
    t.setdata(7,5,1);
    t.display();
    getch();
    return 0;
}
