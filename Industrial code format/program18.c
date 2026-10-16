#include<stdio.h>
#include<stdlib.h>

void CheckEven(int iNo) //means mi denar khi nhi mi direct print krnar
{
    if((iNo%2) ==0)
    {

        printf("It is Even number :");
    }
    else
    {
        printf("It is ODd number :");
    }

}
int main()
{
    int iValue= 0;

    printf("Enter number :\n");
    scanf("%d\n",&iValue);

    CheckEven(iValue);
    
    return EXIT_SUCCESS;
}