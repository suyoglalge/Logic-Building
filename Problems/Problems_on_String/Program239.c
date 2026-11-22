//to send array we use call by Adress

#include<stdio.h>
#include<stdlib.h>
void Display(char str[])                    //can be written as
{
    printf("%s\n",str);
}
int main()
{
    char Arr[] = "Ganesh";

    Display(Arr);                       //call by Adress Arr is base address of Ganesh array

    return EXIT_SUCCESS;
}