#include<iostream>
#include<conio.h>
using namespace std;
class Account
{
   private:
       int account;
       float balance;
       static int roi;
   public:
    void setbalance(float x)
    {
        balance=x;
    }
    void setaccountno(int x)
    {
        account =x;
    }
    static void setrate(int x)
    {
        roi=x;
    }
    void getbalance()
    {
        cout<<"blance is: "<<balance<<endl;
    }
    void getaccountno()
    {
        cout<<"Account no is:"<<account<<endl;
    }
    static void getrate()
    {
        cout<<"Rate is: "<<roi<<endl;
    }

};
int Account:: roi;
int main()
{
    Account ravi,navi;
    cout<<"Account details are:"<<endl;
    ravi.setaccountno(5911);
    ravi.setbalance(4526);
    ravi.setrate(7);
    ravi.getaccountno();
    ravi.getbalance();
    ravi.getrate();
    cout<<"Account details are:"<<endl;
    navi.setaccountno(1313);
    navi.setbalance(500);
    navi.setrate(7);
    navi.getaccountno();
    navi.getbalance();
    navi.getrate();
    getch();
    return 0;

}
