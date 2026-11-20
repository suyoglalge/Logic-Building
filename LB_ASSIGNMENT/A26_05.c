#include<stdio.h>
#include<stdlib.h>

void Display(char ch)
{
    printf("Decimal value is : %d\n", ch);
    printf("Octal value is : %o\n", ch);
    printf("Hexadecimal value is : %x\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character:\n");
    scanf(" %c", &cValue);

    Display(cValue);

    return 0;
}