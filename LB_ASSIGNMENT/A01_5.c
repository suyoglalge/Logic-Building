#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf(" * \n");
    }

}
int main()
{
    int Inumber =0;

    printf("Enter any number");
    scanf("%d",&Inumber);

    Display(Inumber);

    return 0;
}