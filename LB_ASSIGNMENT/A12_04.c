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

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit==4)
        {
            Counter++;
        }
        iNo = iNo / 10;
    }
    return Counter;
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
