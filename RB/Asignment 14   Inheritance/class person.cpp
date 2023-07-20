#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class person
{
  private:
      char name[20];
      int age;
  protected:
    void setname(char *x)
    {


        strcpy(name,x) ;

    }
    void setage(int X)
    {

        age= X;

    }
  public:
    char* getname()
    {
        return(name);
    }
    int getage()
    {
        return(age);
    }
};
class employee:public person
{
   private:
       float salary;
   protected:
    void setsalary(float s)
    {
        salary=s;
    }
    float getsalary()
    {
        return(salary);
    }
   public:
    void setemployee(char*p,int age,float s)
    {
        setname(p);
        setage(age);
        setsalary(s);
    }
    void getemployee()
    {
        cout<<getname()<<" "<<getage()<<" "<<getsalary()<<endl;
    }

};

int main()
{
    employee emp,emp2;
    emp.setemployee("Fouji",27,6000.3);
    emp.getemployee();
    emp2.setemployee("ravi",30,8000.0);
    emp2.getemployee();
    getch();
    return 0;
}
