#include<iostream>
#include<conio.h>
#include<array>
#include<string>
using namespace std;
void f1()
{
    array <int,5> a;
    array <int,5> a2{10,20,30,40,50};
    array <int,5> a3 = {1,2,3};
    array <string,4> a4 = {"Rahul","Ravi","Ritesh","Raj"};

    //creating iterator object

    array <int,5> :: iterator it;

    //accessing array elements with iterstor object
    for(it = a2.begin();it!=a2.end();it++)
        cout<<" " <<*it;
    cout<<endl;

    //Accessing iterator elements with implicit iterator

    for(auto num:a4)
        cout<<" "<<num;
        cout<<endl;

    //Display size of an array

    cout<<"size of a2 is : "<<a2.size()<<endl;

    //Accessing array elements using [] operator

    for(int i=0;i<a2.size();i++)
        cout<<a2[i]<<" ";
    cout<<endl;

    //Acccessing array elements using at() method

    cout<<"\n a3[0] = "<<a3[0];

    //front and back method

    int data = a2.front();
    cout<<"\n front value : "<<data<<endl;
    data = a2.back();
    cout<<"\n back value : "<<data<<endl;

    //data method

    int *p =a2.data();
    cout<<"\n Data of first element : "<<*p;

    //empty method

    if(! a2.empty())
        cout<<"\n Non Empty";
    cout<<endl;
}


