#include<stdio.h>
#include<stdlib.h>

int CountCapital(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCount++;
        }

        str++;
    }

    return iCount;
}

int main()
{
    char Arr[100];
    int iRet = 0;

    printf("Enter the string:\n");
    scanf("%[^'\n']s", Arr);

    iRet = CountCapital(Arr);

    printf("Number of small letters are : %d", iRet);

    return 0;
}