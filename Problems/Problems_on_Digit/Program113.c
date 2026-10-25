//programs on number:check whether number is prime or no 0.7...final best


#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag =true;                              //changes

    for(iCnt=2 ; iCnt<=iNo/2 ; iCnt++)  
    {
        if((iNo%iCnt)==0)
        {
            bFlag=false;                   
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