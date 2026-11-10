/*
    INput:  4
    Output: -4-3-2-101234
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
    for(iCnt=-iNO;iCnt<=0;iCnt++) //O(N)
    {
        printf("    %d\t",iCnt);
    }
    for(iCnt=1;iCnt<=iNO;iCnt++)    //O(N)
    {
        printf("%d\t",iCnt);
    }
    printf("");
}

//time complixy:O(2N)

int main()
{

    int iValue=0;

    printf("Enter a number:");
    scanf("%d",&iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}
