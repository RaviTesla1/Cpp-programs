#include<stdio.h>
#include<conio.h>
main()
{
    int x,y,z,sum;
    float average;
    printf("Enter value of three numbers: ");
    scanf("%d%d%d",&x,&y,&z);
    sum = x+y+z;
    average = sum/3.0;
    printf("\nAverage of three numbers is :%f",average);
    getch();
}

