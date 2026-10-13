#include<stdio.h>
#include<stdlib.h>

int main()
{
    int no = 0;

    printf("Enter number :\n");
    
    if (scanf("%d",&no) != 1)
    {
        fprintf(stderr,"Invalid Input:\n");            //changes

        return EXIT_FAILURE;            //ithesh direct program end honar
    }
    printf("INput is valid\n");


    return EXIT_SUCCESS;
}