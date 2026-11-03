#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool DisplayDigit(int iNo)
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

        if(iDigit == 0)
        {
            Counter++;
        }

        iNo = iNo / 10;
    }

    if(Counter > 0)
    {
        return true;
    }
    else
    {
        return false;
    }


}

int main()
{
    int iValue = 0;
    bool iRet = false;

    printf("Enter a number:");
    scanf("%d",&iValue);

    iRet = DisplayDigit(iValue);

    if(iRet == true)
    {
        printf("There is Zero in number");
    }
    else
    {
        printf("It does not contain Zero");
    }

    return EXIT_SUCCESS;


}
