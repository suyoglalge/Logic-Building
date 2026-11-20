#include<stdio.h>
#include<stdlib.h>

void DisplayExamTime(char chDiv)
{
    switch(chDiv)
    {
        case 'A':
            printf("Your exam is at 7.00 AM");
            break;

        case 'B':
            printf("Your exam is at 8.30 AM");
            break;

        case 'C':
            printf("Your exam is at 9.20 AM");
            break;

        case 'D':
            printf("Your exam is at 10.30 AM");
            break;

        default:
            printf("Invalid Division");
            break;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter your division:\n");
    scanf(" %c", &cValue);

    DisplayExamTime(cValue);

    return EXIT_SUCCESS;
}