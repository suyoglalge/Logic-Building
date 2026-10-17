#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];  

    printf("Enter your name \n");
    scanf("%[^'\n']s",sName);                 //we put[^'\n'] before s to take whole number 

    printf("Welcome....%s\n",sName);

    return EXIT_SUCCESS;
}
/*
Enter your name                        SOLUTION
suyog lalge
Welcome....suyog lalge

*/