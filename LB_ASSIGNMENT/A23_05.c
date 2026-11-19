
#include<stdio.h>
#include<stdlib.h>

typedef void VD;

void print(char * ptr)
{
    int count=0;
    
    while (*ptr!=0)
    {
        
        if(*ptr == "")
        {
            count++;
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
