//to send array we use call by Adress

#include<stdio.h>
#include<stdlib.h>
void Display(char *str)                              //storing in pointer
{
    printf("%s\n",str);
}
int main()
{
    char Arr[] = "Ganesh";

    Display(Arr);                                   //sending address        

    return EXIT_SUCCESS;
}