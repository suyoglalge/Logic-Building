#include<stdio.h>


#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
           *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U')
        {
            return TRUE;
        }

        str++;
    }

    return FALSE;
}

int main()
{
    char Arr[100];
    BOOL bRet = FALSE;

    printf("Enter string:\n");
    scanf("%[^'\n']s", Arr);

    bRet = ChkVowel(Arr);

    if(bRet == TRUE)
    {
        printf("String contains vowel");
    }
    else
    {
        printf("String does not contain vowel");
    }

    return 0;
}