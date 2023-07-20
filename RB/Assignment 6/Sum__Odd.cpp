#include<iostream>
#include<conio.h>
using namespace std;
int sum(int n)
{
    if(n == 1)
        return 1;
    return n*2-1+sum(n-1);
}

int main()
{
    int num,res;
    cout<<"Enter a number: ";
    cin>>num;
    res=sum(num);
    cout<<"sum of odd numbers is: "<<res;
    getch();
    return 0;

}

