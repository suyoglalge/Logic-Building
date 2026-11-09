//question : problems on digit  -> take a number and check number is pellinndrome
//8998=8998
//14341=14341                thee are pellindrome

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPellindrome(int iNo)
{
    int iRev=0;
    int iDigit=0;
    int iTemp=0;

    iTemp = iNo;              //zeroz of iNo

    while (iNo!=0)
    {
        iDigit = iNo%10;
        iRev = ((iRev*10)+iDigit);    
        iNo=iNo/10;
    }

    if(iRev==iTemp)
    {
        return true;
    } 
}
int main()
{
    int iValue =0 ;
    bool iRet=0;

    printf("Enter number :\n");
    scanf("%d",&iValue);
    
    iRet = CheckPellindrome(iValue);

    if(iRet==true)
    {
        printf("It is pallindrome number:");
    }
    else
    {
        printf("It is not pallindrome number:");
    }

    return EXIT_SUCCESS;
}