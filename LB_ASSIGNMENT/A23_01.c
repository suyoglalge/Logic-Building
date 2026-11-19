/*
Enter the string:
Jay  Ganesh
jay ganesh
*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>             //use for toupper and tolower function


typedef void VD;

void print(char * ptr)
{
    while (*ptr!=0)
    {
        printf("%c" ,tolower(*ptr));
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