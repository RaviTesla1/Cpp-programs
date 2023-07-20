#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,max;
    cout<<"Enter two numbers : "<<endl;
    cin>>a>>b;
    max=a>b?a:b;
    int i;
    for(i=max;i>=1;i--)
    {
        if(a%i==0 && b%i==0)
            break;
    }
    if(i >=1)
      cout<<"HCF is : "<<i;
    return 0;

}
