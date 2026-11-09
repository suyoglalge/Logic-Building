/*
    INput:  4
    Output: 1   *   2   *   3   *   4   *

*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNO)
{
    int iCnt=0;
    
    if(iNO<0)
    {
        iNO = -iNO;
    }


    for(iCnt=1;iCnt<=iNO;iCnt++)
    {
        printf("*\t%d\t",iCnt);
    }
    printf("");
}
int main()
{

    int iValue=0;

    printf("Enter a number:");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}