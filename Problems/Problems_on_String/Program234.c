
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    
    char Arr[100];

    printf("Enter string :\n");
    scanf("%[^'\n']s",&Arr);                  //changes: jyo parent \n yet nhi tyo parent

    printf("Entered string is :%s\n",Arr);

    return EXIT_SUCCESS;
}

/*
Enter string :
pune maharastra india
Entered string is :pune      bcoz %s print till space
*/