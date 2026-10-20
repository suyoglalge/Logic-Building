#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iNo)
{
    if(iNo%2==0)
    {
        printf("Enterned number is EVEN\n");
    }
    else
    {
        printf("Entered number is ODD");
    }
}
int main()
{
    int iValue=0;

    printf("Enter aa number to check:");
    scanf("%d",&iValue);

    CheckNumber(iValue);
    
    return EXIT_SUCCESS;
}