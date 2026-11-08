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

int main()
{
    int iValue =0 , iSum=0 , iCount=0;
    float fAvg=0.0f;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iSum = SumDigits(iValue);                         
    iCount = CountDigits(iValue);                     
    fAvg = (float)iSum/(float)iCount;      

    printf("Number of Digits:%d\n",iCount);
    printf("Summation of Digits:%d\n",iSum);
    printf("Avarage of Digits are:%.2f\n",fAvg);    

    return EXIT_SUCCESS;
}