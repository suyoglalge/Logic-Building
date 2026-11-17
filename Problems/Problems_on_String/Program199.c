/*
    INput:  4
    Output: ABCD            Practice

*/

#include<stdio.h>
#include<stdlib.h>

int main()
{

    char ch='\0';

    for(ch='A' ; ch<='Z' ;ch++)
    {
        printf("%d\t%o\t%x\t%c\n",ch,ch,ch,ch);
    }
   return EXIT_SUCCESS;
}

//''  single quotes mdhe character lihl tr ascii value bhetate

//newer use ascii value in code bcoz new user dont knows what is 64