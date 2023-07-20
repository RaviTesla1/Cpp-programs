#include<iostream>
#include<string>
#include<queue>
#include<vector>
using namespace std;
class student
{
   private:
       int rollno;
       string name;
       int rank;
   public:
       student()//default constructor
       {

       }
       student(int r,string n,int ra)
       {
           rollno = r;
           name = n;
           rank = ra;
       }
     int getrollno()
     {
         return rollno;
     }
     string getname()
     {
         return name;
     }
     int getrank()
     {
         return rank;
     }
     void getstudent()
     {
         cout<<rollno<<" "<<name<<" "<<rank<<endl;
     }

};
class sortbyrank
{
    public:
    bool operator()(student s1,student s2)
    {
        if(s1.getrank() < s2.getrank())

            return true;
        else
            return false;
    }
};
void f1()
{
    priority_queue <student,vector<student>,sortbyrank> sq;
    student s1(2,"Ravi",2);
    student s2(5,"Sukhbir",10);
    student s3(1,"Arwinder",1);
    student s4(15,"Sukhraj",20);
    student s5(20,"Harman",7);
    sq.push(s1);
    sq.push(s2);
    sq.push(s3);
    sq.push(s4);
    sq.push(s5);
    student st;
    while(!sq.empty())
    {
        st=sq.top();
        st.getstudent();
        sq.pop();
    }

}
