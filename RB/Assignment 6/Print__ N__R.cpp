#include<iostream>
#include<conio.h>
using namespace std;
void print(int n)
{
    if(n >0 )
    printf("%d ",n);
    print(n-1);
}
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    print(num);
    getch();
    return 0;
}
