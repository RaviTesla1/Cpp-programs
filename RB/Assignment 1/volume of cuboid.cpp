#include<stdio.h>
#include<conio.h>
main()
{
    int length,breadth,height,volume;
    printf("Enter length,breadth and height of cuboid: ");
    scanf("%d%d%d",&length,&breadth,&height);
    volume = length*breadth*height;
    printf("\nVolume of cuboid is %d",volume);
    getch();
}
