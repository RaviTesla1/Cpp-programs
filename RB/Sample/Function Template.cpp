#include<iostream>
#include<conio.h>
using namespace std;
template<typename x>
x big(x a ,x b)
{
    if (a>b)
        return a;
    else
        return b;
}
int main()
{
    char x,y,result;
    cout<<"Enter two values"<<endl;
    cin>>x>>y;
    char res;
    res=big(x,y);
    cout<<"bigger is: "<<res;
    return 0;
    getch();
}
