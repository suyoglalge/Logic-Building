#include<stdio.h>
#include<stdlib.h>
void Display(char *str)
{             
    int iCount=0;

    while (*str !='\0')
    {
        printf("%c\n",*str);
        str++;
    }
}
int main()
{
    char Arr[100];

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    Display(Arr);                                          

    return EXIT_SUCCESS;
}