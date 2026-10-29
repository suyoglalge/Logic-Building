//decimal numbering system base is 10....therefor we use 10 for breaking

#include<stdio.h>
#include<stdlib.h>

void DisplayDigits(int iNo)
{
 
    int iDigit =0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    
    while (iNo!=0)
    {
        iDigit= iNo%10;
        printf("Number is :%d\n",iDigit);
        iNo = iNo/10;
    }
    
}
int main()
{
    int iValue =0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return EXIT_SUCCESS;
}