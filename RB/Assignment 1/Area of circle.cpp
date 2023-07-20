#include<stdio.h>
#include<conio.h>
main()
{
    int r;
    float area;
    printf("Enter value of radius");
    scanf("%d",&r);
    area=3.14*r*r;
    printf("Area of circle is %f",area);
    getch();
}
