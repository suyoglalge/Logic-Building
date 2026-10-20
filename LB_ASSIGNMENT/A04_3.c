#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iNo1 , int iNo2)
{
    if(iNo1>iNo2)
    {
        printf("First entered number is greater:%d\n",iNo1);
    }
    else
    {
        printf("Second entered number is greater:%d\n",iNo2);
    }
}
int main()
{
    int iValue1=0 , iValue2=0;

    printf("Enter first number to check:\n");
    scanf("%d",&iValue1);

    printf("Enter second number to check:\n");
    scanf("%d",&iValue2);

    CheckNumber(iValue1,iValue2);
    
    return EXIT_SUCCESS;
}