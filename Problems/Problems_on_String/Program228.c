
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Arr[10] = {'G','a','n','e','s','h'};      //removed '\0' may prints garbagee

    printf("%s\n",Arr);                                

    printf("Size of array is:%d\n",sizeof(Arr));
    return EXIT_SUCCESS;
}