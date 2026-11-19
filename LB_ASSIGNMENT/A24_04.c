#include<stdio.h>
#include<stdlib.h>

int FirstOccurence(char *ptr, char ch)
{
    int iCnt = 0;

    while(*ptr != '\0')
    {
        if(*ptr == ch)
        {
            return iCnt;
        }

        iCnt++;
        ptr++;
    }

    return -1;

}

int main()
{
    char Arr[100];
    char cChar = '\0';
    int iRet = 0;

    printf("Enter a string:\n");
    scanf("%[^'\n']s", Arr);

    printf("Enter a character:\n");
    scanf(" %c", &cChar);

    iRet = FirstOccurence(Arr, cChar);

    if(iRet == -1)
    {
        printf("Character not found\n");
    }
    else
    {
        printf("First occurrence found at index: %d\n", iRet);
    }

    return EXIT_SUCCESS;
}