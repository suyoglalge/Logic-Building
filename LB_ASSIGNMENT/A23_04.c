
#include<stdio.h>
#include<stdlib.h>

typedef void VD;

void print(char * ptr)
{
    while (*ptr!=0)
    {
       if((*ptr>='0')  && (*ptr<='9'))
       {
        printf("%c\n",*ptr);
       }
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
