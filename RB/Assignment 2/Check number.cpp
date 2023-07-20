#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char ch;
    int con;
    cout<<"Enter a character: "<<endl;
    cin>>ch;
    con = ch;
    switch(con)
    {
    case 48 ... 57 :
        cout<<"Digit";
        break;
    case 65 ... 90:
        cout<<"Uppercase";
        break;
    case 97 ... 122 :
       cout<<"Lowercase";
       break;
    default :
        cout<<"Character";
        break;
    }
    getch();
    return 0;
}
