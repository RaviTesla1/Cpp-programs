#include<iostream>
#include<list>
using namespace std;
void f1()
{
    list <int> l1;
    list<int> l2 {10,20,30};
    list <int>l3  = {60,70,80,90};
    list <int> l4;

    //Accessing implicit iterator

    for(auto X:l2)
        cout<<" " <<X;
    cout<<endl;

    //Accessing Explicit iteraror

    list <int> ::iterator it;

    for(it=l2.begin();it!=l2.end();it++)
        cout<<" "<<*it;
    cout<<endl;

    //using front and back function

    cout<<" "<<"Front value of l2 is :"<<l2.front();
    cout<<endl;
    cout<<" "<<"back value of l2 is :"<<l2.back();
    cout<<endl;

    //Add elements using push_front

    l2.push_front(1);
     for(auto X:l2)
        cout<<" " <<X;
    cout<<endl;

    //Add elements using push_back

    l2.push_back(5);
     for(auto X:l2)
        cout<<" " <<X;
    cout<<endl;

 //Inserting values

  l2.insert(l2.begin(),100);
     for(auto X:l2)
        cout<<" " <<X;
    cout<<endl;

    //Size

    cout<<" "<<"size of l2 is : "<<l2.size()<<endl;

    //Resize

    l2.resize(3);
    cout<<"Size of l2 is : "<<l2.size()<<endl;

    //Empty

    l2.empty()?cout<<"Empty vector":cout<<"Non empty vector";
    cout<<endl;

    //Reverse

   l2.reverse();
   for(it=l2.begin();it!=l2.end();it++)
        cout<<" "<<*it;
    cout<<endl;

    //Sort

    l2.sort();
    cout<<"Sorted elements of l2 are : ";
   for(it=l2.begin();it!=l2.end();it++)
        cout<<" "<<*it;
    cout<<endl;

  //Swap

  l2.swap(l3);
  cout<<"Swapped elements of l2 : ";
   for(auto num:l2)
        cout<<" "<<num;
    cout<<endl;

  cout<<"Swapped elements of l3 : ";
   for(auto num:l3)
        cout<<" "<<num;
    cout<<endl;

    //Merge

    l2.merge(l3);
  cout<<"Merge elements of l2 : ";
   for(auto num:l2)
        cout<<" "<<num;
    cout<<endl;
}
