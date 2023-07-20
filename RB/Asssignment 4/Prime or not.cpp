#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num,i;
    cout<<"Enter a number: ";
    cin>>num;
    for(i=2;i<num;i++)
    {
        if(num % i == 0)
            break;
    }
    if(num <= 1)
       cout<<"Neutral";
    else if(i == num)
          cout<<"Prime";
         else
          cout<<"Not prime";
    getch();
    return 0;
}
