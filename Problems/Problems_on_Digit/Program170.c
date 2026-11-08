//question : Avarage of sum of all digit

#include<stdio.h>
#include<stdlib.h>

int Avarage(int iNO)

{
    int iCount=0;
    int iDigit =0;
    int iSum =0;
    float Freturn=0.0f;

    //updater
    if(iNO<0)
    {
        iNO = iNO;
    }

    while(iNO!=0)
    {
        iDigit = iNO%10;
        iSum = iSum+iDigit;
        iNO = iNO/10;
        iCount++;
    }

     
    Freturn = ((float)iSum/(float)iCount); //type casting

    return Freturn;
}

int main()
{
    int iValue =0;
    float fRet=0.0f;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    fRet = Avarage(iValue);

    printf("Avarage of Digits are:%f\n",fRet);

    return EXIT_SUCCESS;
}