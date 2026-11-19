#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CharCheak(char *ptr , char charac)
{
    while (*ptr!=0)
    {
        if(*ptr==charac)
        {
            return true;
        }
        ptr++;
    }
    
}
int main()
{

    char Arr[100];
    char character = '\0';
    bool bret = false;

    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter Alphabet to cheak wether it is present or not:\n");
    scanf(" %c",&character);            //vvimp glitch

    bret =   CharCheak(Arr , character);

    if(bret==true)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }


    return EXIT_SUCCESS;
}