#include<stdio.h>
#include<stdlib.h>

void DisplayConvert(char cChar)
{
    
    if(cChar >= 'a' && cChar <= 'z')
    {
        printf("%c\n", cChar - 32);
    }

    else if(cChar >= 'A' && cChar <= 'Z')
    {
        printf("%c\n", cChar + 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}