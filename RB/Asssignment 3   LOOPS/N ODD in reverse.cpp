//Write a c++ program to print first n odd numbers in reverse order;
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num,i;
    cout<<"Enter numbers of odd numbers: ";
    cin>>num;
    for(i=num;i>0;i--)
    {
        cout<<2*i-1<<endl;
    }
  getch();
  return 0;
}
