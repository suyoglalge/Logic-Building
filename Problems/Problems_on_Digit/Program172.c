//question : Avarage of sum of all digit , sum , count(3 task)..so we cant do all in one
//function so we will call one function from another function

#include<stdio.h>
#include<stdlib.h>

int CountDigits(int iNo)
{
 
    int iDigit =0;
    int iSum=0;
    int iCnt =0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    
    while (iNo!=0)
    {
        iDigit= iNo%10;
        iNo = iNo/10;
        iCnt++;
    }
    return iCnt;
}
int SumDigits(int iNo)
{
 
    int iDigit =0;
    int iSum=0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    
    while (iNo!=0)
    {
        iDigit= iNo%10;
       iSum = iSum+iDigit;
        iNo = iNo/10;
    }
    return iSum;
}
int AvarageDigit(int iNO)
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
    
    iSum = SumDigits(iNO);                         //changes
    iCount = CountDigits(iNO);                     //changes

    Freturn = (float)iSum/(float)iCount; //type casting
    return Freturn;
}
int main()
{
    int iValue =0;
    float fRet=0.0f;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    fRet = AvarageDigit(iValue);

    printf("Avarage of Digits are:%.2f\n",fRet);    

    return EXIT_SUCCESS;
}