#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    char Arr[100];

    printf("Enter your name:");
    scanf("%[^'n']s",Arr);

    printf("Number is:%s\n",Arr);

    return EXIT_SUCCESS;


}
