#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iNo)
{
    if(iNo>18)
    {
        printf("    You are eligible to vote...     \n");
    }
    else
    {
        printf("    You are not eligible to vote    \n");
    }
}
int main()
{
    int iValue=0;

    printf("Enter your age to check:");
    scanf("%d",&iValue);

    CheckNumber(iValue);
    
    return EXIT_SUCCESS;
}