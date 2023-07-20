#include<stdio.h>
#include<conio.h>
main()
{
    int p,r,t,product;
    float si;
    printf("Enter value of p,r,t: ");
    scanf("%d%d%d",&p,&r,&t);
    product = p*r*t;
    si= product/100.0;
    printf("Simple Interest is %f",si);
    getch();

}
