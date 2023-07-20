#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter value of a,b and c: "<<endl;
    cin>>a>>b>>c;
    if(a > b)
        if(a>c)
          cout<<a<<" is greater";
         else
            cout<<c<<" is greater";
    if(b>c)
      cout<<b<<" is greater";
    else
        cout<<c<<" is greater";
    getch();
    return 0;
}
