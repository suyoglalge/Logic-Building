//question : problems on digit  -> take a number and print its reversed number

#include<stdio.h>
#include<stdlib.h>

int Reverse(int iNo)
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
    int iValue =0 , iRet=0;

    printf("Enter number :\n");
    scanf("%d",&iValue);
    
    iRet = Reverse(iValue);

    printf("%d\n",iRet);

    return EXIT_SUCCESS;
}