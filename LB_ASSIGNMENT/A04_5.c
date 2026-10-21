#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iNo)
{
    if(iNo%5==0)
    {
        printf("Number is divisible by 5\n");
    }
    else
    {
        printf("Number is not divisible by 5\n");
    }
}
int main()
{
    int iValue=0;

    printf("Enter number to check:");
    scanf("%d",&iValue);

    CheckNumber(iValue);
    
    return EXIT_SUCCESS;
}