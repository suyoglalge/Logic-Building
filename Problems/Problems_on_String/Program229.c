
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Arr[100] = {'G','a','n','e','s','h','\0','p','u','n','e'};

    printf("%s\n",Arr);                                

    printf("Size of array is:%d\n",sizeof(Arr));
    return EXIT_SUCCESS;
}


//when %s sees '\0' then anything written after '\0' will never print but while writing
//we have to give space while creating char array