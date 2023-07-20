#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main()
{
    char A[20];
    cout<<"Enter a name:"<<endl;
    cin.ignore();
    cin.getline(A,19);
    cout<<"name is :"<<A;
    getch();
    return 0;


}
