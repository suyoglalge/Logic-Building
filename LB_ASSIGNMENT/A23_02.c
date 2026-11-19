/*
Enter the string:
Jay  Ganesh
JAY  GANESH
*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>


typedef void VD;

void print(char * ptr)
{
    while (*ptr!=0)
    {
        printf("%c" ,toupper(*ptr));
        ptr++;
    }
    
}
int main()
{
    char Arr[100];

    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);

    print(Arr);



    return EXIT_SUCCESS;
}

/*
VD strlwrx(char * ptr)
{
    while (*ptr!=0)
    {
        printf("%s",*ptr);
    }
    
}*/