
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char Arr[20] = "Ganesh Pune";                   //space get counted

    printf("%s\n",Arr);                               

    printf("Size of array is:%d\n",sizeof(Arr));

    printf("Length of string is :%d\n",strlen(Arr));        //length mdhe \0 count hot mhi...but memory mdhe jaga bhetate

    return EXIT_SUCCESS;
}