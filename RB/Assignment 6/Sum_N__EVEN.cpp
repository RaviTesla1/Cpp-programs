#include<iostream>
#include<conio.h>
using namespace std;
int sum(int n)
{
    if(n == 2)
        return 2;
    return n*2+sum(n-1);
}

int main()
{
    int num,res;
    cout<<"Enter a number: ";
    cin>>num;
    res=sum(num);
    cout<<"sum of even numbers is: "<<res;
    getch();
    return 0;

}


