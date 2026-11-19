#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CharCheak(char *ptr , char charac)
{
    int icnt=0;

    while (*ptr!=0)
    {
        if(*ptr==charac)
        {
            icnt++;
        }
        ptr++;
    }

    printf("number of %c occured are %d",charac , icnt);
}
int main()
{

    char Arr[100];
    char character = '\0';
    
    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter Alphabet:\n");
    scanf(" %c",&character);          

    CharCheak(Arr , character);

    return EXIT_SUCCESS;
}