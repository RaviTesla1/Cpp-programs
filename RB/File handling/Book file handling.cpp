#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
using namespace std;
class book
{
   private:
    int bookid;
    char title[20];
    float price;
   public:
    void display();
    void input();
    void storebook();
    void viewbook();
};
void book:: input()
{
    cout<<"Enter bookid\n";
    cin>>bookid;
    if(bookid<0)
        bookid = -bookid;
    cout<<"Enter title of book:\n";
    cin.ignore();
    cin.getline(title,20);
    cout<<"Enter price of book\n";
    cin>>price;
}
void book:: display()
{
    cout<<endl<<bookid<<"  "<<title<<"  "<<price;
}
void book::storebook()
{
    ofstream fout;
    fout.open("bookfile.dat",ios::app);
    fout.write((char*)this,sizeof(*this));
    fout.close();
}
void book::viewbook()
{
    ifstream fin;
    fin.open("bookfile.dat",ios::in);
    if(!fin)
        cout<<"file not found";
    else
    {
        fin.read((char*)this,sizeof(*this));
        while(!fin.eof())
        {
            display();
            fin.read((char*)this,sizeof(*this));
        }
        fin.close();
    }
}
int main()
{
    book b1,b2;

    b2.viewbook();
    getch();
    return 0;
}
