//question : problems on patern printing->$ $ $ $ $

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNO)
{
    int iCnt=0;
    for(iCnt=1 ; iCnt<=iNO ; iCnt++)
    {
        printf(" $ ");
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