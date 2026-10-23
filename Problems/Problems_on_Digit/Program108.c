//programs on number:check whether number is prime or no 0.2


#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    int iSum=0;

    for(iCnt=1 ; iCnt<=iNo/2 ; iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iSum = iSum+iCnt;
        }
    }

    if(iSum==1)
    {
       return true;
    }
    else
    {
        return false;
    }
}

int main(void)                              //main input ghenar nhi
{
    int iValue=0;
    bool bret = false;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    bret =  CheckPrime(iValue);

    if(bret==true)
    {
        printf("It is prime number");
    }
    else
    {
        printf("It is not a prime number");
    }
    
    return EXIT_SUCCESS;
}