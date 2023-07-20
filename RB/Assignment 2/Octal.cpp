#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num,x,m,i;
    cout<<"Enter number";
    cin>>num;
    for(x=num;x>0;x/10)
    {
        m=x%10;
        for(i=8;i<10;i++)
        {
            if(m == i)
            {
                cout<<"not octal";
                break;
            }
        }
    }
    if(x == 0)
      cout<<"octal number";
    getch();
    return 0;
}

