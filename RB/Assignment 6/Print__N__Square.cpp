#include<iostream>
#include<conio.h>
using namespace std;
void print(int n)
{
    if(n > 1)
        print(n-1);
    printf("%d ",n*n);
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
