/*
    INput:  4
    Output: ABCD            

*/

#include<stdio.h>
#include<stdlib.h>

int main()
{

    char ch='\0';

    for(ch='A' ; ch<='Z' ;ch++)
    {
        printf("%c\t",ch);
    }
   return EXIT_SUCCESS;
}