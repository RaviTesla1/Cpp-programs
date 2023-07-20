#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
   private:
      int a,b;
   public:
       void setData(int x,int y)
       {
           a=x;
           b=y;
       }
       void Display()
       {
           cout<<"a = "<<a<<" b = " <<b;
       }
};
int main()
{
    complex x;
    x.setData(5,6);
    x.Display();
    getch();
    return 0;
}
