#include<iostream>
#include<vector>
using namespace std;
void f1()
{
    vector <int> v1;
    vector <int> v2 {23,45,11,60,15};
    vector <int> v3 = {10,20,30};

     //How to know the capacity of vector

     cout<<"Capacity of v1 : "<<v1.capacity()<<endl;
     cout<<"Capacity of v2 : "<<v2.capacity()<<endl;
     cout<<"Capacity of v3 : "<<v3.capacity()<<endl;

     //Checking if vector is empty

     v2.empty()?cout<<"Empty vector":cout<<"Non empty vector";
     cout<<endl;

     //Accessing Vector using implicit vector

     for(auto num:v3)
        cout<<" "<<num;
     cout<<endl;

     //Acccessing vector using explicit vector

     vector<int> :: iterator it;
     for(it = v2.begin();it!= v2.end();it++)
        cout<<" "<<*it;
     cout<<endl;

     //Here we will use the concept of indexing and we know size is 5,it will print from 0 to 5

     for( int i = 0;i<v2.size();i++)
        cout<<" "<<v2.at(i);
     cout<<endl;

     //Accessing elements  with front and back function

     cout<<"Front value :"<<v2.front()<<endl;
     cout<<"back value :"<<v2.back()<<endl;

     //Store more values to the vector

     v3.push_back(25);
     cout<<"Capacity of v3 : "<<v3.capacity()<<endl;

     //no error will come  but not added in v3

    /* v3[4] = 80;
     cout<<"Size of v3 is : "<<v3.size()<<endl;*/

     //Shrink to fit

     v3.shrink_to_fit();
     cout<<"Capacity of v3 is : "<<v3.capacity()<<endl;

     //Edit vector Element

     v3[2]=15;
     for(auto num:v3)
        cout<<" " <<num;
     cout<<endl;

 //Insert values in vector
 //Inserting 3 100s at position 2 from the beginning

 v2.insert(v2.begin()+2,3,100);
 for(auto num: v2)
    cout<<" "<<num;
 cout<<endl;

 //insert values with the help of initializer{}
 //We want to insert three different values.

 v2.insert(v2.begin()+1,{12,13,14});
 for(int num:v2)
    cout<<" "<<num;
    cout<<endl;

    //Erase elements

    v2.erase(v2.begin()+3,v2.begin()+6);
    for(int num:v2)
    cout<<" "<<num;
    cout<<endl;

//Swapping

v2.swap(v3);
for(auto num:v2)
    cout<<" "<<num;
cout<<endl;

for(auto num:v3)
    cout<<" "<<num;
cout<<endl;

//Resizing

v2.resize(3);
cout<<"size of v2 is :"<<v2.size();
}
