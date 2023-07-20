/*Write a function to check whether a given number is even or odd.Return
1 if number is even ,otherwise return 0.(TSRS)*/
#include<iostream>
#include<conio.h>
using namespace std;
int check(int x)
{
    if(x%2)
        return 0;
    return 1;
}
int main()
{
    int number,z;
    cout<<"Enter a number"<<endl;
    cin>>number;
    if(check(number))
        cout<<"EVEN";
    else
        cout<<"ODD";
    getch();
    return 0;
}


