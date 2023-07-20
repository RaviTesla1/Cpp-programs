#include<iostream>
#include<conio.h>
using namespace std;
class result
{
   private:
       int total_attempt,net_right,net_wrong,marks_for_right;
       int marks_for_wrong;
   public:
    void setresult(int a,int b,int c,int d=2,int e=0)
    {
        total_attempt = a;
        net_right = b;
        net_wrong = c;
        marks_for_right = d;
        marks_for_wrong = e;
    }
    void showresult()
    {
        cout<<"Total attempts are : "<<total_attempt<<endl;
        cout<<"Correct questions are: "<<net_right<<endl;
        cout<<"Wrong questions are: "<<net_wrong<<endl;
        int result;
        result = net_right*2;
        if(result >= 33)
            cout<<"PASS"<<endl;
        else
            cout<<"FAIL";

    }

};
int main()
{
    result ravi;
    ravi.setresult(50,10,20);
    ravi.showresult();
    getch();
    return 0;
}
