//Cheak whether no is even or Odd


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h> //bool inbuild nhiy tya mule include kely

bool CheckEven(int iNo)  //bool mule True or False mdhe answer yet
{
    if((iNo%2) ==0)
    {

        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    int iValue= 0 ;
    bool bRet = false;       //default value of boolean is false(0)

    printf("Enter number :");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }
    
    return EXIT_SUCCESS;
}