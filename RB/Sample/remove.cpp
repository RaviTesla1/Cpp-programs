#include<iostream>
#include<conio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v1 ={11,2,5,11,18,25};
    vector<int>::iterator it,newEnd;
    newEnd=remove(v1.begin(),v1.end(),11);
    for(int num:v1)
        cout<<num<<" ";
    cout<<endl;
    for(it=v1.begin();it!=newEnd;it++)
        cout<<*it<<" ";
        return 0;
}
