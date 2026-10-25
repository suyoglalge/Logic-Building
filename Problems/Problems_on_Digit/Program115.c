//programs on number:check whether number is prime or no 0.9...optinal


#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag =false;                              

    for(iCnt=2, bFlag=true ; iCnt<=iNo/2 ; iCnt++)          //changes
    {
        if((iNo%iCnt)==0)
        {
            bFlag=false;
            break;                   
        }
    }

    return bFlag;
}
int main(void)                              
{
    int iValue=0;
    bool bret = false;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    bret =  CheckPrime(iValue);

    if(bret)                      
    {
        printf("It is prime number");
    }
    else
    {
        printf("It is not a prime number");
    }
    
    return EXIT_SUCCESS;
}