
#include<stdio.h>
#include<stdlib.h>

void PrintEven(int iNO)
{
    int icnt = 0;

    for(icnt = 1; icnt <= iNO; icnt++)
    {
        printf("%d\t", icnt * 2);
    }
}

int main()
{
    int iValue = 0, iChk = 0;

    printf("Enter number: ");
    iChk = scanf("%d", &iValue);

    if(iChk == 1)
    {
        printf("Valid Number\n");
    }
    else
    {
        printf("Invalid number\n");
        return 0;
    }

    PrintEven(iValue);

    return EXIT_SUCCESS;
}
