#include<iostream>
#include<conio.h>
using namespace std;
class item
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
            cout<<"a = "<<a<<" b = "<<b;
        }
  friend void f1(item i);
};
void f1(item i)
{
    int c;

    c=i.a + i.b;
    cout<<"\nc = "<<c;
}
int main()
{
    item i1;
    i1.setdata(12,4);
    i1.showdata();
    f1(i1);
    getch();
    return 0;
}
