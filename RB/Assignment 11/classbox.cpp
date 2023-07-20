#include<iostream>
#include<conio.h>
using namespace std;
class box
{
    private:
      int length,breadth,height;
     public:
         box()
         {


         }
         box(int x, int y,int z)
         {
             length =x;
             breadth =y;
             height = z;
        }
        box(int x)
        {
            length =x;
            breadth =x;
            height =x;
        }
         void setdimensions(int x,int y,int z)
         {
           length=x;
           breadth=y;
           height=z;
         }
         void showdimensions()
         {
             cout<<"len is "<<length<<" breadth is "<<breadth<<" hei is "<<height;
         }

};
int main()
{
    box b;
    b.setdimensions(9,2,1);
    b.showdimensions();
    getch();
    return 0;
}
