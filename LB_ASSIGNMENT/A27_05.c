#include<stdio.h>

void Reverse(char *str)
{
    char *start = str;
    char *end = str;

    while(*end != '\0')  //new
    {
        end++;
    }

    end--;

    while(end >= start)  //new
    {
        printf("%c", *end);
        end--;
    }
}

int main()
{
    char Arr[100];

    printf("Enter string:\n");
    scanf("%[^\n]", Arr);

    Reverse(Arr);

    return 0;
}