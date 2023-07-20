#include<iostream>
#include<conio.h>
using namespace std;
class box
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
            cout<<"a = "<<a<<" b = "<<b<<" c = "<<c<<endl;

        }
        int volume(int x,int y,int z)
        {
            int volume;
            a=x;
            b=y;
            c=z;
            volume = a*b*c;
            return volume;
        }

};
int main()
{
    box b;
    b.setdata(2,3,4);
    b.display();
    int result;
    result=b.volume(2,3,4);
    cout<<"Volume is "<<result;
    getch();
    return 0;
}
