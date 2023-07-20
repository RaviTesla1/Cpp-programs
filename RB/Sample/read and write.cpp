#include<iostream>
#include<conio.h>
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

int main()
{
    writing("mysirg education services");
    getch();
    return 0;
}
/*void writing(char text[])
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
*/
