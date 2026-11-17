/*
    INput:  4
    Output: ABCD            Practice

*/

#include<stdio.h>
#include<stdlib.h>

int main()
{

    int icnt=0;

    for(icnt='A' ; icnt<='Z' ;icnt++)
    {
        printf("%d\t%o\t%x\t%c\n",icnt,icnt,icnt,icnt);
    }
   return EXIT_SUCCESS;
}

//''  single quotes mdhe character lihl tr ascii value bhetate

//newer use ascii value in code bcoz new user dont knows what is 64