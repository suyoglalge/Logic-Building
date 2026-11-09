//question : problems on digit  -> take a number and check number is pellinndrome
//8998=8998
//14341=14341                thee are pellindrome



//                           issue

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPellindrome(int iNo)
{
    int iRev=0;
    int iDigit=0;

    while (iNo!=0)
    {
        iDigit = iNo%10;
        iRev = ((iRev*10)+iDigit);      //remember tip: if / is use to sseprate...* is use to add
        iNo=iNo/10;
    }

    return iRev; 
}
int main()
{
    int iValue =0 ;
    bool iRet=0;

    printf("Enter number :\n");
    scanf("%d",&iValue);
    
    iRet = CheckPellindrome(iValue);

    if(iRet==iValue)
    {
        printf("It is pallindrome number:");
    }
    else
    {
        printf("It is not pallindrome number:");
    }

    return EXIT_SUCCESS;
}