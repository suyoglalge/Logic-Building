#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int DisplayDigit(int iNo)
{
    int iDigit = 0;
    int Counter = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo>100)
    {
        printf("Number is greater than 100");
    }
    else if(iNo<100)
    {
        printf("Number is smaller than 100");
    }
    else
    {
        printf("Invalid");
    }

}

int main()
{
    int iValue = 0;
    int iRet = false;

    printf("Enter a number:");
    scanf("%d",&iValue);

    iRet = DisplayDigit(iValue);

    printf("Number is:%d\n",iRet);

    return EXIT_SUCCESS;


}
