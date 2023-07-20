#include<iostream>
#include<conio.h>
using namespace std;
class time
{
    private:
        int hour,min,sec;
    public:
        void settime(int x,int y,int z)
        {
            hour=x;
            min=y;
            sec=z;
        }
        void showtime()
        {
            cout<<hour<<": "<<min<<": "<<sec<<endl;
        }
        time operator +(time t)
        {
            time temp ;
            temp.hour = hour + t.hour;
            temp.min = min + t.min;
            temp.sec = sec + t.sec;
            return temp;
        }
         time operator -(time t)
        {
            time temp ;
            temp.hour = hour - t.hour;
            temp.min = min - t.min;
            temp.sec = sec - t.sec;
            return temp;
        }
        int operator <(time t)
        {
            if(hour < t.hour)
                return 1;
            else
               return 0;
        }

};
int main()
{
    time t1,t2,t3;
    t1.settime(20,10,14);
    t1.showtime();
    t2.settime(1,4,15);
    t2.showtime();
    t3=t1+t2;
    t3.showtime();
    if( t1 < t2)
        cout<<"caller object is lesser";
    else
        cout<<"arguement object is lesser";
    getch();
    return 0;
}
