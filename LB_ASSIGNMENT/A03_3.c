
#include<stdio.h>
#include<stdlib.h>

void PrintEven(int iNO)
{
    int icnt = 0;

    for (icnt=1;icnt<iNO;icnt++)
    {
        if((iNO%icnt==0)&&(icnt%2==0))
        {
            printf("%d\n",icnt);
        }
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
