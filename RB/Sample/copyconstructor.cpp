#include<iostream>
#include<conio.h>
using namespace std;
 class complex
{
   private:
     int a,b;
   public:
    complex(complex &x)
    {
        a=x.a;
        b=x.b;
    }
    complex()
    {
        a=0;
        b=0;

    }
    complex(int x,int y)
    {
        a=x;
        b=y;
    }
    complex(int x)
    {
        a=x;
        b=0;
    }
    void showdata()
    {
        std::cout<<"\na= "<<a<<" b= "<<b;
    }
};

int main()
{
    complex c1(3,4),c2(2),c3;
    complex c4=c1;
    c1.showdata();
    c2.showdata();
    c3.showdata();
    c4.showdata();
    getch();
    return 0;
}
