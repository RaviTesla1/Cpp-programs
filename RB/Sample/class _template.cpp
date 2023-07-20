#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
template<typename x>
class array
{
   private:
    int size;
    int last_index;
    x *ptr;
   public:
    array()
   {
    ptr = NULL;
    last_index=-1;
    size =0;

   }
  void createarray(int s)
  {
      ptr=new x[s];
      size =s;
  }
  void insert(int index,x data)
  {
      if(index < 0 || index > last_index + 1)
        cout<<"\n Invalid index";
      else if (last_index = size-1)
        cout<<"\n Array is full";
      else
      {
          int i;
          for(i = last_index;i>= index;i--)
            ptr[i+1]=ptr[i];
          ptr[index]=data;
          last_index ++;
      }

  }
  void viewarray()
  {
      int i;
      for(i=0;i<=last_index;i++)
        cout<<ptr[i]<<" ";
  }
};
int main()
{
    array<int> arr;
    arr.createarray(5);
    arr.insert(0,10);
    arr.insert(1,20);
    arr.insert(0,30);
    arr.viewarray();
    getch();
    return 0;
}

