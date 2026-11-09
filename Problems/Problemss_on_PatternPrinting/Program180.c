//question : problems on patern printing

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNO)
{
    int iCnt=0;
    for(iCnt=1 ; iCnt<=iNO ; iCnt++)
    {
        printf(" * ");
    }
    printf("\n");    
}
int main()
{
 
    Pattern(7);
    
    return EXIT_SUCCESS;
}