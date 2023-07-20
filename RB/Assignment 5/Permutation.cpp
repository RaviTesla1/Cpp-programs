#include<iostream>
#include<conio.h>
using namespace std;
float perm(int n,int r)
{
    int fact_n=1,fact_sub=1,sub,i;
    float result;
    sub= n - r;
    for(i=1;i<=n;i++)
    {
        fact_n= i*fact_n;//1,2,6

    }
    for(i=1;i<=sub;i++)
    {
        fact_sub= i*fact_sub;//1,2,6

    }
    result = fact_n/fact_sub;
    return result;
}
int main()
{
    int n,r;
    float res;
    cout<<"Enter value of n and r:"<<endl;
    cin>>n>>r;
    res=perm(n,r);
    cout<<"Output is:"<<res;
    getch();
    return 0;

}
