//question : problems on patern printing-> input=5 ..output 12345

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNO)
{
    int iCnt=0;
    for(iCnt=1 ; iCnt<=iNO ; iCnt++)
    {
        printf(" %d\t ",iCnt);
    }
    printf("\n");    
}
int main()
{
    int iValue=0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    Pattern(iValue);
    
    return EXIT_SUCCESS;
}