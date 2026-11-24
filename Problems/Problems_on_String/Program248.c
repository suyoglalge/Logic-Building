//aaccept string and count number of vowel (a,e,i,o,u)

#include<stdio.h>                       
#include<stdlib.h>

int CountVowelX( char *str)
{
    int iCount=0;

    while(*str !='\0')
    {
        if((*str =='a') || (*str =='e')||(*str =='i')||(*str =='o')||(*str =='u'))
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

    iRet = CountVowelX(Arr);

    printf("Number of Vowels are :%d\n",iRet);
    return EXIT_SUCCESS;
}