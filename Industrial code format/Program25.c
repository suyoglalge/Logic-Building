#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];  //30 byte chi memory alloted for aray....can use only 29bytes..if we put 28 then segmentation fault accour.
                     //i byte for /o...not in java     
    printf("Enter your name \n");
    scanf("%s",sName);                 //here no need to write & in front of sNmae..

    printf("Welcome....%s\n",sName);

    return EXIT_SUCCESS;
}

/*
Enter your name                       PROBLEM
Suyog subhash lalge
Welcome....Suyog

bcous scanf mdhe space takne parent execute hote....problem is in %s
*/