//ways of getting string from user

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    
    char Arr[100];

    printf("Enter string :\n");
    //scanf("%[^'\n']s",&Arr);
    
    fgets(Arr,sizeof(Arr),stdin);                     //special fom string.h...can be written as 

    printf("Entered string is :%s\n",Arr);

    return EXIT_SUCCESS;
}

/*
Enter string :
pune maharastra india
Entered string is :pune      bcoz %s print till space
*/