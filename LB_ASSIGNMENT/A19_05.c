/*
1       2       3       4       5
        2       3       4       5
                3       4       5
                        4       5
                                5
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow , int iColumn)
{
    int i=0;;
    int j=0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iColumn; j++)
        {
            if(i > j)
            {
                printf("\t");
            }
            else
            {
                printf("%d\t", j);
            }
        }

        printf("\n");
    }
}
int main()
{
    int iNo1=0;
    int iNo2=0;

    printf("Enter rows:");
    scanf("%d",&iNo1);

    printf("Enter Column:");
    scanf("%d",&iNo2);

    Pattern(iNo1 , iNo2);

    return EXIT_SUCCESS;
}