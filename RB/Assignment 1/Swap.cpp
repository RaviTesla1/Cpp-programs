#include<stdio.h>
#include<conio.h>
main()
{
    int x,y,temp;
    printf("Enter value of x and y: ");
    scanf("%d%d",&x,&y);
    printf("\n x = %d and y = %d",x,y);
    temp=x;
    x=y;
    y=temp;
    printf("\n x = %d and y = %d",x,y);
    getch();
}
