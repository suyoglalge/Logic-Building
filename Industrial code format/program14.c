#include"Header.h"        //header file include keli baherun hya mdhe header files h
/////////////////////////////////////////////////////
//
//      Entry Point Of the Application
//
/////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0, iValue2=0, iResult=0;

    printf("Enter first number:\n");
    if (scanf("%d",&iValue1)!=1)
    {
        fprintf(stderr,"Enable to proceed as input is invalid...\n");  //error asl tr stderr vr.....changl asl tr stdio
        return EXIT_FAILURE;
    }

     printf("Enter Second number:");
      if (scanf("%d",&iValue2)!=1)
    {
        fprintf(stderr,"Enable to proceed as input is invalid...\n");  //error asl tr stderr vr.....changl asl tr stdio
        return EXIT_FAILURE;
    }
    
    iResult = Addition(iValue1,iValue2);
    printf("Addition is :%d\n",iResult);
     
    return EXIT_SUCCESS;                                 //changes
}
