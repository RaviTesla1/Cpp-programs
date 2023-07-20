#include<iostream>
#include<conio.h>
using namespace std;
class item
{
  public:
      int a,b;
      static int k;
  public:
    void set_a(int x)
    {
        a=x;
    }
    void set_b(int y)
    {
        b=y;
    }
    void set_k(int z)
    {
        k=z;
    }
    void show_k()
    {
        cout<<k;
    }
    void show_a()
    {
        cout<<a;
    }
    void show_b()
    {
        cout<<b;
    }
};
int item::k;
int main()
{
    item i1,i2;
    i1.set_a(5);
    cout<<"a= ";
    i1.show_k();
     i1.set_k(5);
    cout<<"\nk= ";
    i1.show_k();
    getch();

}
