#include<iostream>
#include<conio.h>
main()
{
    int number;
    std::cout<<"Enter a number";
    std::cin>>number;
    if(number % 7)
        std::cout<<"Not divisible";
    else
        std::cout<<"Divisible";
    getch();
}
