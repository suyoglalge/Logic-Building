#include<stdio.h>
#include<stdlib.h>

void DisplayDigit(int iNo)
{
    int iCount=0;
    int iDigit=0;
    int iRev=0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    
    for(iCount=1 ; iCount<=iNo ; iCount++)
    {
        iDigit=iNo%10;
        iRev = (iRev*10)+iDigit;
        printf("%d\n",iRev);
        iNo=iNo/10;
        
    }

    
}
int main()
{
    int iValue=0;

    printf("Enter a number:");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return EXIT_SUCCESS;
}