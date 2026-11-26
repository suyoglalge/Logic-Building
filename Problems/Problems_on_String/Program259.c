#include<stdio.h>                       
#include<stdlib.h>

int countDigitsX( char *str)
{
    int iCount=0;

    while(*str !='\0')
    {
        if( *str>='0' && *str<='9')
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}
int main()
{
    char Arr[100]={'\0'};
    int iRet=0;

    printf("ENter string:");
    scanf("%[^'\n']s",Arr);

    iRet = countDigitsX(Arr);

    printf("frequency of Digits:%d\n",iRet);
    return EXIT_SUCCESS;
}
/*
ENter string:pune4 maharastra27
frequency of Digits:3
*/