#include<stdio.h>
#include<stdlib.h>

void Reverse(char *ptr)
{
    int iStart = 0;
    int iEnd = 0;
    char temp = '\0';

    while(ptr[iEnd] != '\0')
    {
        iEnd++;
    }

    iEnd--;

    while(iStart < iEnd)
    {
        temp = ptr[iStart];
        ptr[iStart] = ptr[iEnd];
        ptr[iEnd] = temp;

        iStart++;
        iEnd--;
    }
}

int main()
{
    char Arr[100];

    printf("Enter a string:\n");
    scanf(" %[^\n]", Arr);

    Reverse(Arr);

    printf("Reversed string is: %s\n", Arr);

    return EXIT_SUCCESS;
}