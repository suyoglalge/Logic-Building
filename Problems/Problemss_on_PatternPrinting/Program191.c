/*
    INput:  4
    Output: -4-3-2-1 0 1234

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
    for(iCnt=-iNO;iCnt<=iNO;iCnt++)  //O(2N)  timecomplexity is andaaje +-1,2 dont count
    {
        printf("    %d\t",iCnt);
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