#include<stdio.h>
#include<stdlib.h>

int Multiply(int iNo1, int iNo2)
{
    int ipersent = 0;

    ipersent = ((iNo1/iNo2)*100);
    
    return ipersent;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter total marks:\n");
    scanf("%d", &iValue1);

    printf("Enter obtained marks:\n");
    scanf("%d", &iValue1);

    iRet = Multiply(iValue1, iValue2);

    printf("Multiplication is: %d\n", iRet);

    return 0;
}