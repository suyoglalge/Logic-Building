#include<stdio.h>
#include<stdlib.h>

void CheckVowel(char cChar)
{
    if(cChar=='a' || cChar=='e' || cChar =='i'|| cChar=='o'||cChar=='u')
    {
        printf("It is VOWEL");
    }
    else 
    {
        printf("it is not VOWEl");
    }

}
int main()
{
    char cValue='\0';

    printf("Enter a character :\n");
    scanf("%c",&cValue);

    CheckVowel(cValue);

    return EXIT_SUCCESS;
}