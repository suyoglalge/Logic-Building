#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(int iNo , int iNo2)
{

    if(iNo==iNo2)
    {
        printf("Entered number is equal");
    }
    else
    {
        printf("Entered number is not equal");
    }

}
int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter a number:");
    scanf("%d",&iValue1);

    printf("Enter a number:");
    scanf("%d",&iValue2);

    DisplayDigit(iValue1 ,iValue2);

    return EXIT_SUCCESS;
}