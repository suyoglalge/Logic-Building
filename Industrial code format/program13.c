#include <stdio.h>
#include <stdlib.h>                                          //changes
///////////////////////////////////////////////////////
//   
//Function name:Addition
//  Input       :  integer,integer
//  Output      :  Integer
//  Discription :  Perform Addition
//  Date        :  04/10/2026
//  Author      :  Suyog Subhash Lalge
//
///////////////////////////////////////////////////////
int Addition(
                int ino1, //first input                      //changes
                int ino2  //second input
            )
{
    int ians=0;

    ians = ino1+ ino2; //buisness logic
    return ians;
}
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
//////////////////////////////////////////////////
//          Step 5:Test the program.
//          Tested test Cases
//________________________________________________
//      INput1      Input2      output
//________________________________________________
//      10          11          21
//      11          0           11
//      0           11          11
//      20          -9          11
//      -9          20          11
//________________________________________________
//////////////////////////////////////////////////
