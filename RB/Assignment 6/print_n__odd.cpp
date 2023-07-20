#include<iostream>
#include<conio.h>
using namespace std;
void print(int n);
void print(int n)
{
    if(n > 1)
        print(n-1);
    printf("%d  ",2*n-1);
}
int main()
{
    int num;
    cout<<"Enter a number:\n";
    cin>>num;
    print(num);
    getch();
    return 0;
}
