#include<conio.h>
#include<iostream>
#include<fstream>
using namespace std;
void writing(char text[])
{
    ofstream fout;
    fout.open ("newfile.txt",ios::app);
    fout<<text;
    fout.close();
}
void reading()
{
    char ch;
    ifstream fin;
    fin.open("newfile.txt",ios::in);
    if(!fin)
        cout<<"file not found";
    else
    {
        fin>>ch;
        while(!fin.eof())
        {
            cout<<ch;
            fin>>ch;
        }
        fin.close();
    }
}
int main()
{
    reading();
    getch();
    return 0;
}
