#include<iostream>
#include<conio.h>
using namespace std;
class Time
{
    private:
        int hour;
        int minu;
        int sec;
    public:
        void settime(int x,int y,int z)
        {
            hour = x;
            minu = y;
            sec = z;
        }
        void showtime()
        {
            cout<<"Time = "<<hour<<" : "<<minu<<" : "<<sec<<endl;
        }
        Time operator+(Time t)
        {
            Time temp;
            temp.hour = hour + t.hour;
            temp.minu = minu + t.minu;
            temp.sec  = sec  + t.sec;
            return temp;
        }
        Time operator-(Time t)
        {
            Time temp;
            temp.hour = hour - t.hour;
            temp.minu = minu - t.minu;
            temp.sec  = sec  - t.sec;
            return temp;
        }

};
int main()
{
    Time t1,t2,t3,t4;
    t1.settime(2,10,45);
    t1.showtime();
    t2.settime(3,4,15);
    t2.showtime();
    cout<<endl;
    t3=t1+t2;
    t3.showtime();
    cout<<endl;
    t4=t1-t2;
    t4.showtime();
    getch();
    return 0;
}
