#include<conio.h>
#include<iostream>
#include<fstream>
using namespace std;
void writing(char text[])
{
    ofstream fout;
    getch();
    fout.open("file1.txt",ios::out);
    getch();
    fout<<text;
    getch();
    fout.close();
    getch();
}
void append(char text[])
{
    ofstream fout;
    getch();
    fout.open("file1.txt",ios::app);
    getch();
    fout<<text;
    getch();
    fout.close();
    getch();
}
void reading()
{
    char ch;
    ifstream fin;
    fin.open("file1.txt",ios::in);
    if(!fin)
        cout<<"File not found";
    else
    {
        ch=fin.get();
        while(!fin.eof())
        {
            cout<<ch;
            ch=

            fin.get();
        }
        fin.close();
    }

}
int main()
{
   reading();
   getch();
}
