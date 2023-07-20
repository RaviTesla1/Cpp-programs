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
        time operator ++()  //pre Increment
        {
            time temp ;
            temp.hour = ++hour ;
            temp.min =++ min  ;
            temp.sec = ++sec ;
            return temp;
        }

        time operator ++(int)//post increment
        {
            time temp ;
            temp.hour = hour++ ;
            temp.min = min++  ;
            temp.sec = sec++ ;
            return temp;
        }
        time operator !()
        {
            time temp;
            if(hour > 0)
            {
                temp.hour = 0;
                temp.min = 0;
                temp.sec = 0;
            }
            else
            {
                temp.hour = 1;
                temp.min = 0;
                temp.sec =0;
            }
            return temp;
        }

};
int main()
{
    time t1,t2,t3,t4,t5,t6;
    t1.settime(20,10,14);
    t1.showtime();
    t2.settime(1,4,15);
    t2.showtime();
    t3 = ++t1;
    t3.showtime();
    t4 = t2++;
    cout<<"t4 : "<<endl;
    t4.showtime();
    t5 = !t4;
    t5.showtime();
    t6 = !t5;
    cout<<"t6 : ";
    t6.showtime();

    getch();
    return 0;
}
