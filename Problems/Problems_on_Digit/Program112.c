//programs on number:check whether number is prime or no 0.6


#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    for(iCnt=2 ; iCnt<=iNo/2 ; iCnt++)  //jrr condition prime asl tr.... iCnt<=iNo/2 hicha mul loop stop hoil   
    {
        if((iNo%iCnt)==0)
        {
            break;                   //changes..to stop iteration
        }
    }
    if(iCnt==(iNo/2)+1)
    {
        return true;
    }
    else
    {
        return false;
    }

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