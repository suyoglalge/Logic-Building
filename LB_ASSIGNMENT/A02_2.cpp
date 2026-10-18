#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt=0;

    //updater

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for (iCnt=1 ; iCnt<=iNo ; iCnt++)
    {
        printf("    +   ");
    }
}
int main()
{
    int iValue=0;

    cout<<"Enter any number :"<<"\n";
    cin>>iValue;

    Display(iValue);
    return 0;
}