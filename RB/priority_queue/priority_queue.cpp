#include<iostream>
#include<vector>
#include<queue>
#include<string>
using namespace std;
class employee
{
   private:
    int empid;
    float salary;
    string name;
   public:
       employee()
       {

       }
       employee(int id,string n,float s)
       {
           empid=id;
           salary=s;
           name=n;
       }
    int employeeid()
    {
        return empid;
    }
    float getsalary()
    {
        return salary;
    }
    string getname()
    {
        return name;
    }
    void employeedata()
    {
        cout<<empid<<" "<<name<<" "<<salary<<endl;
    }
};
class sortbysalary
{
  public:
      bool operator()(employee e1,employee e2)
      {
          if(e1.getsalary() < e2.getsalary())
            return true;
          else
            return false;
      }

};
void f1()
{
    priority_queue<employee,vector<employee>,sortbysalary> pq;
    employee e1(1,"Ravi",1000);
    employee e2(2,"Ranbir",90000);
    employee e3(3,"Fouji",60000);
    employee e4(4,"Kuldeep",10000);
    employee e5(5,"Bawa",7000);
    employee emp;
    pq.push(e1);
    pq.push(e2);
    pq.push(e3);
    pq.push(e4);
    pq.push(e5);
    while(!pq.empty())
    {
        emp=pq.top();
        emp.employeedata();//cout<<pq.top()<<endl;
        pq.pop();
    }
}
